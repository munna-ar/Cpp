#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    char find_the_difference(string s, string t){
        map<char,int>mp;
        for(int i=0; i<t.size(); i++) mp[t[i]]++;
        for(int i=0; i<s.size(); i++) mp[s[i]]--;
        for(auto i: mp){
            if(i.second == 1) return i.first;
        }
    }
};
int main(){
    Solution a;
    cout<<a.find_the_difference("abcd", "abcde");
    return 0;
}