#include<bits/stdc++.h>
using namespace std;
                              // Bottom up
long fibo(long n){
    vector<long> dp (100, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    cout<<fibo(10);
    return 0;
}
