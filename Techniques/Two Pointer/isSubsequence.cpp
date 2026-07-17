#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool is_subsequence(string s, string t){
    int sp=0; int tp=0;                    // p for pointer
    while(sp < s.size() && tp < t.size()){
        if(s[sp] == t[tp]) sp++;
        tp++;
    }
    if(sp == s.size()) cout<<"True"<<endl;
    else cout<<"False"<<endl;
}
};
int main(){
    Solution a;
    a.is_subsequence("abc", "afbzc");
    a.is_subsequence("acb", "afbzc");
    return 0;
}