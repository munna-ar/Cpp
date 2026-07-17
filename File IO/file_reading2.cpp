#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file_reading.txt");

    string x;
    // Until prints all line
    while(in >> x){
        cout<<x<<" ";
    }
    in.close();
    return 0;
}