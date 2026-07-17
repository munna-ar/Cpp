#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void coin_piles(long long a, long long b){
        long long moves;
        moves = a + b;
        if(moves % 3 == 0){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
};
int main(){
    int t;
    cin>>t;
    solution x;
    while(t--){
        long long a, b;
        cin>>a>>b;
        x.coin_piles(a, b);
    }
    return 0;
}
