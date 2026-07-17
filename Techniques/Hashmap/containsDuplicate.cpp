#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool contains_duplicate(vector<int>arr){
        map<char,int>mp;
        for(int i=0; i<arr.size(); i++) mp[arr[i]]++;
        for(auto i:mp){
            if(i.second >= 2) return true;
        }
        return false;
    }
};
int main(){
    Solution a;
    cout<<a.contains_duplicate({1,1,2,3});
    return 0;
}