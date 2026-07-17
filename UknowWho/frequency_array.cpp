#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n], fr[10000] = {0};
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr[i] = a;
        fr[a]++;
    }
    sort(arr, arr + n);
    for(int i=1; i<=m; i++){
        cout<<fr[i]<<endl;
    }
    return 0;
}