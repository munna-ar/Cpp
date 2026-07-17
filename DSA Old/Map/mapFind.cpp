#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abc";
    map<char, int>mp;
    for(int i=0; i<s.size(); i++) mp[s[i]];
    if(mp.find('a') != mp.end()) cout<<"found"; //       != mp.end() means until it reaches to the end
    else cout<<"not found";
    return 0;
}