#include<bits/stdc++.h>
#include<fstream>
// #include<ifstream> derived from fstream
// #include<ofstream> derived from fstream

using namespace std;
                     // '>>' sign means taking input from a file
int main(){
    string x;
    // Opening file
    ifstream in("file_reading.txt"); // "in" just a name

    if(!in){
        cout<<"Cannot open file";
        return 0;
    }
    //getline(in, x);  // Takes every lines
    in >> x;            // Takes only the first value
    cout<<x;           // "in" is a replacement for cin
    return 0;
}