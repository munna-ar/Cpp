#include<bits/stdc++.h>
using namespace std;

int raising_bacteria(int n){
    int count = 0;
    while(n != 0){
        if((n & 1) != 0) count++;
        n >>= 1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<raising_bacteria(n);
    return 0;
}