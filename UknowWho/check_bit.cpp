#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, count = 0;
    cin>>n>>k;

    for(int i=0; i<=k; i++){
        if((n & 1) == 1) count++;
        n = n>>1;
    }
    if(count == 1) cout<<"true";
    else cout<<"false";
    return 0;
}
