#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, i;
    cout<<"enter number: ";
    cin>>num;
    for(i=2; i<num; i++){
        if(num % i == 0){
            cout<<"not prime number";
            break;
        }
    }
    if(i == num){
        cout<<"prime number";
    }
    return 0;
}