#include<bits/stdc++.h>
using namespace std;
int kp(vector<int> wt, vector<int> pr, int w, int n){
    vector<vector<int>> dp(n+1, vector<int> (w+1, -1));
    for(int i=0; i<=n; i++) dp[i][0] = 0;
    for(int i=0; i<= w; i++) dp[0][i] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if(wt[i-1] <= j){
                dp[i][j] = max((pr[i-1]+dp[i-1][j-wt[i-1]]), dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[4][7];
    // for(auto i: dp){
    //     for(auto j: i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main(){
    cout<<kp({2,3,4,5},{5,6,7,8}, 7, 4);
    return 0;
}