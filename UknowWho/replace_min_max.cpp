#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn = arr[0], mx = 0, l, r;
    for(int i=0; i<n; i++){
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
        if(arr[i] == mn) l = i;
        if(arr[i] == mx) r = i;
    }
    swap(arr[l], arr[r]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
