#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int split_a_string_in_balanced_string(string s){
        int rp = 0, lp = 0, count = 0;
        for(char c:s){
            if(c=='R') rp++;
            else lp++;
            if(rp == lp) count++;
        }
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.split_a_string_in_balanced_string("RRLLRLRRRLLL");
    return 0;
}