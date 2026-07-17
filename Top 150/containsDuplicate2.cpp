#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool contains_duplicate(vector<int> nums, int k){
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i])){
                if(abs(mp[nums[i] - i]) <= k){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
int main(){
    Solution a;
    cout<<a.contains_duplicate({1,2,1,3,4}, 2);
    return 0;
}