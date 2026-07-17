#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    string name;
    cout<<"Name : ";
    getline(cin, name);
    short age;
    cout<<"Age : ";
    cin>>age;

    ofstream op("user_input.txt", ios :: app);

    op<<name;
    op<<" : ";
    op<<age;
    op<<"\n";

    op.close();
    return 0;
}