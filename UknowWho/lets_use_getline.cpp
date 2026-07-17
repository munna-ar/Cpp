#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int a = s.find("\ ");
    cout<<s.substr(0, a);
    return 0;
}
