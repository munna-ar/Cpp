#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: // check if 's' is a subsequence of 't'
    bool is_subsequence(string s, string t){
        int sp = 0, tp = 0;
        while(sp < s.size() && tp < t.size()){
            if(s[sp] == t[tp]){
                sp++;
            }
            tp++;
        }
        return sp == s.size();
    }
};
int main(){
    Solution a;
    cout<<a.is_subsequence("abc", "ahbxc");
    return 0;
}