#include<bits/stdc++.h>
using namespace std;

int counting_divisors(int x){
    int count = 0;
    for(int i=1; i<=x; i++){
        if(x % i == 0) count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        cout<<counting_divisors(x)<<endl;
    }
    return 0;
}