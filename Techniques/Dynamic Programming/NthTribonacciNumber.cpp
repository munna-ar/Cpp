#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int nth_tribonacci_number(int num){
        if(num==0) return 0;
        else if(num == 1 || num == 2) return 1;
        vector<int> dp(num+1, 0);
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3; i<=num; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout<<dp[num];
    }
};
int main(){
    Solution a;
    a.nth_tribonacci_number(4);
    return 0;
}