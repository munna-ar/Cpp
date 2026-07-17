#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 18, b = 12;
    int res = 0;
    for(int i=1; i<12; i++){
        if(a % i == 0 && b % i == 0) res = max(res, i*i);
    }
    cout<<res;
    return 0;
}
