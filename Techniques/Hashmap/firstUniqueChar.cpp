#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int first_unique_char(string s){
        map<char,int>mp;
        for(int i=0; i<s.size(); i++) mp[s[i]]++;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] == 1) return i;
        }
        return -1;
    }
};
int main(){
    Solution a;
    cout<<a.first_unique_char("level");
    return 0;
}