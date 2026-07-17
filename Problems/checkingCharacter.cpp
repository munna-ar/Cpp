#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        cout<<"Alphabate";
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special character";
    }
    return 0;
}