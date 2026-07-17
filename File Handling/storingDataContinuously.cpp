#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    string name;
    int age;
    ofstream file;
    file.open("file3.txt", ios::out|ios::app);
    for(int i=0; i<2; i++){
        cout<<"Enter name : ";
        getline(cin, name);
        cout<<"Enter age : ";
        cin>>age;
        file<<name<<" : "<<age<<endl;
        cin.ignore(); // continuously run until reaches to limit
    }
    file.close();
    return 0;
}