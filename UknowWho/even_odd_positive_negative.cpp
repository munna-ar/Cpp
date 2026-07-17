#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, e=0, o=0, p=0, n=0;
    cin>>m;
    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        if(a % 2 == 0) e++;
        if(a % 2 != 0) o++;
        if(a > 0) p++;
        if(a < 0) n++;
    }
    cout<<"Even : "<<e<<endl;
    cout<<"Odd : "<<o<<endl;
    cout<<"Positive : "<<p<<endl;
    cout<<"Negative : "<<n;
    return 0;
}
