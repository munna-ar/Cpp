#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    a = 1;
    b = 2;
    cout<<"before "<<a<<" "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after "<<a<<" "<<b;

    return 0;
}