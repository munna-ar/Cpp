#include<bits/stdc++.h>
using namespace std;
                              // Top down
long fibo(long n){
    vector<long> dp (100, -1);
    if(n <=1 ) return n;
    else if(dp[n] != -1) return dp[n];
    else return dp[n] = fibo(n-1) + fibo(n-2);
}
int main(){
    cout<<fibo(10);
    return 0;
}
