#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, r;
    cin>>l>>r;
    int mx = 0;
    for(int i=min(l, r); i<=max(l, r); i++){
        mx = max(mx, (l^i));
        mx = max(mx, (r^i));
    }
    cout<<mx;
    return 0;
}
