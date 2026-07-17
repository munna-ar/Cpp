#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s.substr(i,i+2) == "010" || s.substr(i,i+2) == "101") a[i] = "Good";
        else a[i] = "Bad";
    }
    for(string i : a) cout<<i<<endl;
    return 0;
}
