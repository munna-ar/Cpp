#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool contains_duplicate2(vector<int>arr, int k){
        map<int,int>mp;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(mp.count(arr[i])){
                if(abs(i-mp[arr[i]]) <= k) return true;
            }
            mp[arr[i]] = i;
        }
        return false;
    }
};
int main(){
    Solution a;
    cout<<a.contains_duplicate2({2,1,2,3}, 2);
    return 0;
}