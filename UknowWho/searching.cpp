#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x, p = -1;
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i] == x) p = i;
    }
    cout<<p;
    return 0;
}
