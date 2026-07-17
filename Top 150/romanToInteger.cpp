#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int roman_to_integer(string s){
        int ans = 0;
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] < mp[s[i+1]]){
                ans -= mp[s[i]];
            }
            else{
                ans += mp[s[i]];
            }
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.roman_to_integer("IV");
    cout<<"\n";
    cout<<a.roman_to_integer("VII");
    return 0;
}