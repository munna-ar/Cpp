#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: //         string::npos > "until the end of the string"
    int maximum_repeating_substring(string sequence, string word){
        int k=0;
        string temp = word;
        while((sequence.find(temp) != string::npos)){ // find() > gets the index of the char
            temp += word;
            k++;
        }
        cout<<k;
    }
};
int main(){
    Solution a;
    a.maximum_repeating_substring("ababc", "ab");
    return 0;
}