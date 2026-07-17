#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longest_common_prefix(vector<string> st){
        int n = st.size();
        sort(st.begin(), st.end()); // sorts the vector array of strings in increasing order
        string ans = "";           // {"flight", "flower", "flow"}
        string first = st[0];
        string last = st[n-2];
        for(int i=0; i<min(first.size(), last.size()); i++){
            if(first[i] != last[i]){
                return ans; // means break;
            }
            ans += last[i]; // found same character
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.longest_common_prefix({"flower", "flow", "flight"});
    return 0;
}