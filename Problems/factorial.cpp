#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, sum;
    cout<<"enter number: ";
    cin>>a;
    sum = 1;
    for(int i=1; i<a+1; i++){
        sum *= i;
    }
    cout<<"factorial of "<<a<<" is: "<<sum;
    return 0;
}