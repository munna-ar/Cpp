#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isomorphic_strings(string s, string t){
        unordered_map<char,int> mp1, mp2;
        if(s.size() != t.size()) return false;
        for(int i=0; i<s.size(); i++){
            if(mp1[s[i]] != mp2[t[i]]) return false;
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.isomorphic_strings("egg", "add");
    return 0;
}