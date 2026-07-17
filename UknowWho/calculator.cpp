#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    char s;
    int r;
    cin>>a>>s>>b;
    int x = stoi(a), y = stoi(b);
    if(s == '+') r = x + y;
    else if(s == '-') r = x - y;
    else if(s == '*') r = x * y;
    else r = x / y;
    cout<<r;
    return 0;
}
