#include<bits/stdc++.h>
using namespace std;

long claimbing_stairs(int n){
    int first = 1, second = 1, next;
    for(int i=1; i<=n; i++){
        next = first + second;
        first = second;
        second = next;
    }
    return first;
}
int main(){
    cout<<claimbing_stairs(10);
    return 0;
}
