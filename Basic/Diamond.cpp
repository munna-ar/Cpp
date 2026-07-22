#include<iostream>
using namespace std;

int main(){
    int n = 4;
    
    // Upper half
    for(int i=0; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // Lower half
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}