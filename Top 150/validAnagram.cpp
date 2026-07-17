#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool valid_anagram(string s, string t){
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++) mp[s[i]]++;
        for(int j=0; j<t.size(); j++) mp[t[j]]--;
        for(auto x: mp){
            if(x.second != 0) return false;
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.valid_anagram("anagram", "garamna")<<endl;
    cout<<a.valid_anagram("rat", "car");
    return 0;
}