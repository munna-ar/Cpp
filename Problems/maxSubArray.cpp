#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>nums){
    int sum_max = nums[0];                // first element
    int sum_including_current = nums[0];    // first element
    for(int i=1; i<nums.size(); i++){     // starting from the second element
        sum_including_current = sum_including_current + nums[i];
        sum_including_current = max(sum_including_current, nums[i]);
        sum_max = max(sum_max, sum_including_current);
    }
    return sum_max;
}
int main(){
    cout<<maxSubArray({-2,1,6});
    return 0;
}