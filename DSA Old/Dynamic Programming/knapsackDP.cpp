#include<bits/stdc++.h>
using namespace std;
int kp(vector<int> wt, vector<int> pr, int w, int n){
    vector<vector<int>> dp(n+1, vector<int>(w+1,-1));
    if(n == 0 || w == 0) return dp[n][w] = 0;

    if(dp[n][w] != -1) return dp[n][w];
    
    if(wt[n-1] <= w) { // here, kp function is calling recursively at the dp[4][9] index
        return dp[n][w] = max(pr[n-1] + kp(wt, pr, w-wt[n-1], n-1), kp(wt, pr, w, n-1));
    }

    else{
        return dp[n][w] = kp(wt, pr, w, n-1);
    }
}
int main(){
    cout<<kp({2,3,4,5}, {5,6,7,8}, 9, 4);
    return 0;
}