#include<bits/stdc++.h>
using namespace std;
int i = 5;
int hello(int n){
    if(n == 0) return 0;
    hello(n-1);
    cout<<i<<" * "<<n<<" = "<<i*n<<endl;
}
int main(){
    hello(5);
    return 0;
}