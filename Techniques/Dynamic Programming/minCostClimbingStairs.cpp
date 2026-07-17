#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int min_cost_climbing_stairs(vector<int> arr){
        int n = arr.size();
        vector<int> dp(n+1, 0);
        dp[0] = dp[1] = 0; // base case
        for(int i=2; i<=n; i++){
            dp[i] = min((dp[i-1] + arr[i-1]), (dp[i-2] + arr[i-2])); // dp[2]=10, dp[3] = 15
        }
        return dp[n]; // dp[3] = 15
    }
};
int main(){
    Solution a;
    cout<<a.min_cost_climbing_stairs({10,15,20});
    return 0;
}