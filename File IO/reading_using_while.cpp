#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("read_while.txt");

    if(!in){
        cout<<"Cannot open file";
        return 0;
    }
    string s;
    while(in >> s){       // prints word by word
        cout<<s<<" ";
    }
    in.close();
    return 0;
}