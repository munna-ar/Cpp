#include<bits/stdc++.h>
using namespace std;

int bitwise_and(int n, int k){    // do AND operation 1 to n, print maximize value which less than k
    int mx = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int val = i & j;
            if(val < k) mx = max(mx, val);
        }
    }
    return mx;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<bitwise_and(a, b)<<"\n";
    }
    return 0;
}
