#include<bits/stdc++.h>
using namespace std;

// using Dynamic Programming
int fib(int n){
    vector<int> dp(n+1, -1); // this process is called Memoization
    if(dp[n] != -1) return dp[n];
    if(n <= 1) return dp[n] = n;
    return dp[n] = fib(n-1) + fib(n-2);
}
// using recursion
int fibo(int n){
    if( n<= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    cout<<fib(10);
    return 0;
}