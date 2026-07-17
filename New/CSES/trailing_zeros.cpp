#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int trailing_zeros(long long n){
        long long fac = 1;
        int count = 0;
        while(n){
            fac *= n;
            n--;
        }
        while(fac){
            if(fac % 10 != 0){
                break;
            }
            else{
                count++;
                fac /= 10;
            }
        }
        return count;
    }
};
int main(){
    solution a;
    cout<<a.trailing_zeros(20);
    return 0;
}
