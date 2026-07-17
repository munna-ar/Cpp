#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int length(string s){
        int rp = s.size()-1, count = 0 ;
        while(rp >= 0 && s[rp] == ' ') rp--; // removing spaces from the very end
        while(rp >= 0 && s[rp] != ' '){ // then counting the characters of the word at the end
            count++;
            rp--;
        }
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.length("hello moon ")<<endl;
    cout<<a.length("hello world ");
    return 0;
}