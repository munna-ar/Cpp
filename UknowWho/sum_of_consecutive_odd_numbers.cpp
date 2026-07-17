#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x, y, mx, mn;
        cin>>x>>y;
        if(x > y){
            mx = x;
            mn = y;
        }
        else{
            mx = y;
            mn = x;
        }
        for(int j=mn; j<mx; j++){
            if(j % 2 != 0) sum += j;
        }
        cout<<sum;
        sum = 0;
        cout<<endl;
    }
    return 0;
}
