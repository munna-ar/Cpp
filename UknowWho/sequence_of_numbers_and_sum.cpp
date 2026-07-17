#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, mn, mx, sum = 0;
    cin>>x>>y;

    if(x > y){
        mx = x;
        mn = y;
    }
    else{
        mx = y;
        mn = x;
    }
    for(int i = mn; i<=mx; i++){
        if(x <= 0 || y <= 0){
            return 1;
        }
        else sum += i;
    }
    cout<<sum;

    return 0;
}
