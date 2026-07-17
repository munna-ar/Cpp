#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    int n2;
    cin>>n;
    n2 = (float)n;
    if(n-n2 == 0) cout<<"int "<<(int)n;
    else cout<<"float "<<(float)n;
    return 0;
}
