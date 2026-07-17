#include<bits/stdc++.h>
using namespace std;
 
class solution{
public:
    int missing_num(int n){
        int sum1 = 0, sum2 = 0;
        sum1 += n*(n+1) / 2;
        n -= 1;
        while(n--){
            int a;
            cin>>a;
            sum2 += a;
        }
        return  sum1 - sum2;
    }
};
int main(){
    int n;
    cin>>n;

    solution x;
    cout<<x.missing_num(n);
    return 0;
}
