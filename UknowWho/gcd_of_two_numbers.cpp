#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int res = min(a, b);
    while(res > 1){
        if(a % res == 0 && b % res == 0){
            break;
        }
        res--;
    }
    cout<<res;
    return 0;
}