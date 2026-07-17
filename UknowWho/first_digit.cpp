#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, f;
    cin>>s;
    f = s.substr(0,1);
    if(stoi(f) % 2 == 0) cout<<"Even";
    else cout<<"No";
    return 0;
}
