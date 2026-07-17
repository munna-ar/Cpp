#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int roman_to_integer(string s){
        map<char,int> store;
        int ans = 0;
        store['I'] = 1;
        store['V'] = 5;
        store['X'] = 10;
        store['L'] = 50;
        store['C'] = 100;
        store['D'] = 500;
        store['M'] = 1000;
        for(int i=0; i<s.size(); i++){
            if(store[s[i]] < store[s[i+1]]) ans -= store[s[i]];
            else ans += store[s[i]];
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.roman_to_integer("XI");
    return 0;
}