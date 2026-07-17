#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        for(int j=0; j<a; j++){
            int b;
            b = a % 10;
            cout<<b<<" ";
            a /= 10;
        }
        cout<<endl;
    }
    return 0;
}