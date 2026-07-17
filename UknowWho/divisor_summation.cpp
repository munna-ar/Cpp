#include<bits/stdc++.h>
using namespace std;

int divisor_summation(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n % i == 0) sum += i;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<divisor_summation(x)<<"\n";
    }
    return 0;
}