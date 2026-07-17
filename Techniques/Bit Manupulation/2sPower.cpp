#include<bits/stdc++.h>
using namespace std;

int twos_power(int num){
    int count = 0;
    while(num != 0){
        if((num & 1) == 1) count++;
        num = num>>1;
    }
    if(count == 1) cout<<"2's power"; // if n is 2's power then there will appears 1 just one time
    else cout<<"not 2's power";      // in n's binary
}

int main(){
    twos_power(4);
    return 0;
}