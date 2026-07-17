#include<bits/stdc++.h>
using namespace std;
int main(){
    int alphabets, digits, schar, i;
    alphabets = digits = schar = i = 0;
    string str;
    cout<<"enter anything: ";
    getline(cin, str);
    while(str.size()>i){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        else{
            schar++;
        }
        i++;
    }
    cout<<"alphabets: "<<alphabets<<endl;
    cout<<"digits: "<<digits<<endl;
    cout<<"special character: "<<schar;

    return 0;
}