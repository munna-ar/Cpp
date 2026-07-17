#include<bits/stdc++.h>
using namespace std;

int digit_sum(int x){
    int d_sum = 0;
    while(x){          // means while x > 0
        d_sum += x % 10;
        x /= 10;
    }
    return d_sum;
}
int some_sums(int n, int a, int b){
    int total_sum = 0;
    for(int i=1; i<=n; i++){
        int temp = digit_sum(i); // digits sums
        if(temp >= a && temp <= b) total_sum += i;
    }
    cout<<total_sum;
}
int main(){
    some_sums(20, 2, 5);
    return 0;
}
