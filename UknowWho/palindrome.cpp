#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int l = 0, r = s.size()-1;
    bool a = true;

    while(l < r){
        if(s[l] != s[r]) a = false;
        l++;
        r--;
    }
    if(a) cout<<"Yes";
    else cout<<"No";
    return 0;
}
