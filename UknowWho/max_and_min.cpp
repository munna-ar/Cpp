#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, max, min;
    cin>>a>>b>>c;
    if(a > b){
        if(a > c) max = a;
        else max = c;
    }
    else if(b > a){
        if(b > c) max = b;
        else max = c;
    }
    if(a<b){
        if(a < c) min = a;
        else min = c;
    }
    else if(b < a){
        if(b < c) min = b;
        else min = c;
    }
    cout<<min<<" "<<max;
    
    return 0;
}
