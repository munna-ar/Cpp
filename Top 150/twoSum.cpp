#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> two_sum(vector<int> nums, int target){
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int remain = target - nums[i]; // 7,2,
            if(mp.count(remain)){ // 7 doesn't exist, 2 exists
                return {mp[remain], i}; // (mp[2] = 0, i) = (0, 1)
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
int main(){
    Solution a;
    for(auto i: a.two_sum({2,7,11,15}, 9)) cout<<i<<" ";
    return 0;
}