#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m], mx = max(n,m);
    for(int i=0; i<mx; i++){
        for(int j=0; j<mx; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    bool y = false;
    for(int i=0; i<mx; i++){
        for(int j=0; j<mx; j++){
            if(arr[i][j] == x) y = true;
        }
    }
    if(y) cout<<"will not take number";
    else cout<<"will take number";
    return 0;
}
