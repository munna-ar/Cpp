#include<bits/stdc++.h>
#include<fstream>
// #include<ifstream> derived from fstream
// #include<ofstream> derived from fstream

using namespace std;
 
int main(){
    // Opening file
    ifstream in("reading_file.txt");

    // char x; // Read character by character
    string x; // Read word by word
    while(in >> x){  // continously takes string from file
        cout<<x<<" ";
    }
    in.close(); // We should always close the file
    return 0;
}