#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[10], s2[10];
    cout<<"enter two string:"<<endl;
    cin>>s1>>s2;
    if(strcmp(s1, s2) == 0){   // strcmp(), compare two string (char type)
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}