#include<bits/stdc++.h>
using namespace std;
int main(){
    string f_name;
    cout<<"enter full name: ";
    getline(cin, f_name);
    for(int i=0; i<f_name.size(); i++){
        cout<<f_name[i]<<" ";
    }
    return 0;
}