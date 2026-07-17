#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x <= 48 || x <= 58) cout<<"IS DIGIT";
    else if(x <= 65 || x<= 91) cout<<"IS CAPITAL";
    else cout<<"IS SMALL";
    return 0;
}