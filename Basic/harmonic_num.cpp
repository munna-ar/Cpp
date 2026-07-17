#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
double har[MAX + 1];
int main(){
    har[0] = 0;
    for(int i=1; i<=MAX; i++){
        har[i] = har[i-1] + 1.0 / i;
    }
    int t;
    cout<<"Test case : ";
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<setprecision(4)<<har[n]<<"\n";
    }
    return 0;
}