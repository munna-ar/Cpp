#include<bits/stdc++.h>

using namespace std;
 
int main(){
    int n;
    cin>>n;

    int y, m;
    y = n / 365;
    n = n % 365;
    m = n / 30;
    n = n % 30;
    cout<<y<<" "<<m<<" "<<n;
    return 0;
}