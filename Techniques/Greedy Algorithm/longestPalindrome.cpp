#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longest_palindrome(string str){
        map<char,int> chr;
        bool odd_found = false;
        int count = 0;
        for(int i=0; i<str.size(); i++) chr[str[i]]++;
        for  (auto c: chr){
            if (c.second % 2 == 0) count += c.second;
            else {
                odd_found = true;
                count += c.second - 1;
            }
        }
        if (odd_found) count++;
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.longest_palindrome("abcab");
    return 0;
}