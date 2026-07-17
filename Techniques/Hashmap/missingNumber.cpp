#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missing_number(vector<int>nums){
        int ans = 0, n = nums.size();
        for(int i=1; i<=n; i++) ans = ans ^ i; // 1,3,0
        for(int i=0; i<n; i++) ans = ans ^ nums[i]; // 0,1,2
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.missing_number({0,1,3});
    return 0;
}