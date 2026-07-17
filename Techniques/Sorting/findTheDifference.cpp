#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    char find_the_difference(string s, string t){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i=0;
        while(i<s.size()){
            if(s[i] != t[i]) return t[i];
            i++;
        }
        return t[s.size()];
    }
};
int main(){
    Solution a;
    cout<<a.find_the_difference("abcd", "abcdt");
    return 0;
}