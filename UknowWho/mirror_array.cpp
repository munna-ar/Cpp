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
    for(int i=0; i<mx; i++){
        for(int j=mx-1; j>=0; j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
