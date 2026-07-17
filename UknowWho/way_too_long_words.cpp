#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    string x[p];
    for(int i=0; i<p; i++){
        string s;
        cin>>s;
        int n = s.size();
        if(n <= 10){
            x[i] = s;
        }
        else if(n > 10){
            string f = s.substr(0,1), l = s.substr(n-1,1); // f = first char, l = last char
            x[i] = f + to_string(n-2) + l;
        }
    }
    for(int i=0; i<p; i++){
        cout<<x[i]<<endl;
    }
    return 0;
}
