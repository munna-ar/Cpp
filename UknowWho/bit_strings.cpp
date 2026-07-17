#include<bits/stdc++.h>
using namespace std;

int bit_strings(int n){
    return pow(2, n);
}
int main(){
    int n;               // if n = 3 then > 000, 111, 001, 011, 100, 110, 010, 101
    cin>>n;             // if n = 2 then > 00, 11, 01, 10
    cout<<bit_strings(n);
    return 0;
}
