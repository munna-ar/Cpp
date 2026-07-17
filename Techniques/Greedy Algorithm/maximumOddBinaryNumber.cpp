#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string maximum_odd_binary(string s){
        sort(s.rbegin(), s.rend()); // decreasing order
        int n = s.size();
        for(int i=n-1; i>=0; i--){
            if(s[i] == '1') swap(s[i],s[n-1]);
        }
        return s;
    }
};
int main(){
    Solution a;
    cout<<a.maximum_odd_binary("0110");
    return 0;
}