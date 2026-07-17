#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int sl = 0, sr = 0, df = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) sl += arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j == n-1) sr += arr[i][j];
        }
    }
    df = abs(sl-sr);
    cout<<df;
    return 0;
}
