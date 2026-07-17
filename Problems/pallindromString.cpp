#include<bits/stdc++.h>
using namespace std;
int main(){
    string rev, str;
    cout<<"enter any string: ";
    cin>>str;
    for(int i=str.size()-1; i>=0; i--){
        rev.push_back(str[i]);
    }
    if(str == rev){
        cout<<"pallindrom";
    }
    else{
        cout<<"not pallindrom";
    }

    return 0;
}