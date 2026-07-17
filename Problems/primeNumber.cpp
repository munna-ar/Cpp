#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Limit: ";
    cin>>n;
    for(i=2; i<n; i++){
        for(j=2; j<i; j++){
            if(i%j == 0){
                cout<<"";
                break;
            }
        }
        if(j==i){
            cout<<j<<" ";
        }
    }
    return 0;
}