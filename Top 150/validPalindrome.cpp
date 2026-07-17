#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool valid_palindrome(string str){
        string temp;
        for(auto c: str){
            if(isalnum(c)){
                temp += tolower(c);
            }
        }
        int lp = 0, rp = temp.size()-1;
        while(lp < rp){
            if(temp[lp] != temp[rp]){
                return false;
            }
            // found same character
            lp++;
            rp--;
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.valid_palindrome("A man, a plan, a canal: Panama");
    return 0;
}