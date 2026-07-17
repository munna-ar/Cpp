#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a > m) m = a;
    }
    cout<<m;
    return 0;
}
