#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void permutations(int n){
        vector<int> arr(n);
        if(n == 1){
            cout<<1;
        }
        else if(n == 2 || n == 3){
            cout<<"No solution";
        }
        else{
            // print even numbers first in decreasing order
            for(int i=n; i>=1; i--){
                if(i % 2 == 0){
                    cout<<i<<" ";
                }
            }
            // print odd numbers in decreasing order
            for(int i=n; i>=1; i--){
                if(i % 2 != 0){
                    cout<<i<<" ";
                }
            }
        }
    }
};
int main(){
    solution x;
    x.permutations(5);
    return 0;
}
