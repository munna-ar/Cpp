#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool a = 1;
    cin>>n;
    if(n % 2 == 0){
        cout<<"No";
    }
    for(int i=2; i<n; i++){
        if(n % i == 0 || n / i == 0){
            a = 0;
        }
    }
    if(a) cout<<"Yes";
    else cout<<"No";

    return 0;
}
