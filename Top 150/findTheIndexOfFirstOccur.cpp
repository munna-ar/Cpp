#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int find_the_index(string heystack, string needle){
        int x = heystack.size(), y = needle.size();
        if(x < y) return -1;
        for(int i=0; i<x; i++){
            if(heystack.substr(i, y) == needle){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution a;
    cout<<a.find_the_index("flower", "wer");
    return 0;
}