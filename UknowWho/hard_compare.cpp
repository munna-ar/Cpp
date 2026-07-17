#include<bits/stdc++.h>
using namespace std;

int hard_compare(long a, long b, long c, long d){
    double x = b*log(a);
    double y = d*log(c);
    if(x > y) cout<<"Yes";
    else cout<<"No";
}
int main(){
    hard_compare(5,2,4,2);
    return 0;
}