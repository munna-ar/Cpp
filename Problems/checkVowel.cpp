#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cout<<"enter character: ";
    cin>>c;
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout<<"vowel";
    }
    else{
        cout<<"not vowel";
    }
    return 0;
}