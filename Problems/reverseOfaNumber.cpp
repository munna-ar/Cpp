#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, rem, sum = 0;
    cout<<"enter number: ";
    cin>>num;
    while(num != 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num /= 10;
    }
    cout<<"reverse: "<<sum;
    return 0;
}