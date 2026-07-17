#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool ransom_note(string r, string m){
        unordered_map<char,int> mp;
        for(int i=0; i<m.size(); i++){
            mp[m[i]]++;
        }
        for(int i=0; i<r.size(); i++){
            if(mp[r[i]] > 0){
                mp[r[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution a;
    cout<<a.ransom_note("a", "b")<<endl;
    cout<<a.ransom_note("aa", "aab");
    return 0;
}