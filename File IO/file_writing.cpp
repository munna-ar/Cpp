#include<bits/stdc++.h>
#include<fstream>
// #include<ifstream> derived from fstream
// #include<ofstream> derived from fstream

using namespace std;
                    // '<<' sign means giving or inserting output into a file
int main(){
    string s = "hello world !";
    // Opening file
    ofstream out("reading_files.txt"); // "out" just a name

    out<<s;   // "out" is a replacement for cout
    return 0;
}