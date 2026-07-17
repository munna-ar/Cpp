#include<bits/stdc++.h>
using namespace std;
int main(){
    int binary, decimal = 0, remainder, i = 0;
    cout<<"enter binary number: ";
    cin>>binary;
    while(binary != 0){
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2,i);
        i++;
    }
    cout<<decimal;
    return 0;
}