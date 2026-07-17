#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Solution{
    public:
    string reverse_word(string str){
        int i = 0, n = str.size(); // 14
        string ans = "";
        while(i < n){
                while(i < n && str[i] == ' ') i++; // 2,
                if(i == n) break;
                int j = i+1; // 3, 10, 
                while(j < n && str[j] != ' ') j++; // 8, 14,
                string sub = str.substr(i, j-i); // (2,7) "hello", (9,13) "world"
                if(ans.size() == 0) ans = sub; // "hello"
                else ans = sub + " " + ans; // "world hello"
                i = j+1; // 9, 15
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.reverse_word("  hello world ");
    return 0;
}