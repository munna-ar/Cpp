#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    string s;
    ofstream file;
    file.open("file2.txt", ios::out | ios::app); // overwrite contents unless use "ios::out | ios::app"
    cout<<"Enter name: "<<endl;
    getline(cin, s);
    file<<"hello "<<s<<endl;
    file.close();
    return 0;
}