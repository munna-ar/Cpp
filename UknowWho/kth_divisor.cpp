#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[k+1] = {0};

    for(int i=1; i<n; i++){
        if(n % i == 0) arr[i] = i;
    }
    if(arr[k+1] != 0 && n % arr[k+1] == 0) cout<<arr[k+1];
    else cout<<"-1";
    return 0;
}