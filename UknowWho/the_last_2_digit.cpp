#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, r, s;
    cin>>a>>b>>c>>d;
    r = a*b*c*d;
    if(r <= 100) cout<<r;
    else if(r >= 100){
        s = r % 100;
        cout<<s;
    }
    else cout<<r % 1000;

    return 0;
}
