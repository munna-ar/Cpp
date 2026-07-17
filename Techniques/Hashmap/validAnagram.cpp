#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool valid_anagram(string s, string t){
        map<char,int>mp;
        for(auto x: s) mp[x]++;
        for(auto x: t) mp[x]--;
        for(auto x: mp){
            if(x.second != 0) return false;
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.valid_anagram("anagram", "agrmana");
    return 0;
}