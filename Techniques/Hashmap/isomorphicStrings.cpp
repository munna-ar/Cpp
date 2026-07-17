#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isomorphic_strings(string s, string t){
        map<char,int>mp, mp2;
        int l = s.size();
        if(l != t.size()) return false;
        for(int i=0; i<l; i++){
            if(mp[s[i]] != mp2[t[i]]) return false; // checking previous char's occurrences
                                                    // mp[e]==mp2[a]==0, mp[g]==mp2[d]==2 ... and so on
            mp[s[i]] = i+1; // counting char occurrences             e=1, g=2, g=3
            mp2[t[i]] = i+1; // counting char occurrences            a=1, d=2, d=3
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.isomorphic_strings("egg", "add");
    return 0;
}