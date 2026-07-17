#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    char c;
    cin>>x>>c>>y;
    if(c == '=' && x == y) cout<<"Right";
    else if(c == '>' && x > y) cout<<"Right";
    else cout<<"Wrong";
    return 0;
}
