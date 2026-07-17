#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, rem, tem, sum = 0;
    cout<<"enter number: ";
    cin>>num;
    tem = num;
    while(num != 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num /= 10;
    }
    if(tem == sum){
        cout<<"pallindrom";
    }
    else{
        cout<<"not pallindrom";
    }
    return 0;
}