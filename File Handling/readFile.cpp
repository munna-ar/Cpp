#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    ifstream file("file4.txt");

    // getline(file,s,'*');            // '*' automatically gets the next lines without using while loop
    // getline(file, s);
    // cout<<s<<endl;

    // using while loop
    while(getline(file, s)){
        cout<<s<<endl;
    }
    file.close();
    return 0;
}