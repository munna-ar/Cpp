#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    bool x = false;
    for(int i=0; i<n; i++){
        if(a[i] == b[i]) x = true;
    }
    if(x) cout<<"Yes";
    else cout<<"No";
    return 0;
}
