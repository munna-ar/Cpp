#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s = 1;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        for(int i=1; i<=a; i++){
            s *= i;
        }
        cout<<s<<endl;
        s = 1;
    }
    return 0;
}
