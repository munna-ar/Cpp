#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn = arr[0], p = 0;
    for(int i=0; i<n; i++){
        mn = min(mn, arr[i]);
        if(mn == arr[i]) p = i;
    }
    cout<<mn<<" "<<p+1;
    return 0;
}
