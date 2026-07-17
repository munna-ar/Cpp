#include<bits/stdc++.h>
using namespace std;
class solution { // sliding window
    public:
    int longest_substring(string s){// "abc"
        vector<int> store(256,-1);
        int maxlen = 0, start = -1;
        for(int i=0; i<s.size(); i++){
            if(store[s[i]] > start){
                start = store[s[i]];
            }
            store[s[i]] = i;
            maxlen = max(maxlen, (i-start));
        }
        cout<<maxlen;
    }
};
int main(){
    solution hello;
    hello.longest_substring("abc"); // 3
    return 0;
}