#include<bits/stdc++.h>
#include<fstream> // 1. ofstream (output file stream), 2. ifstream (input file stream)
// ofstream uses to create file, write into file
// ifstream uses to open file, read file
using namespace std;
int main(){
    ofstream hello; // we can name it anything. here "hello" is a variable
    hello.open("file1.txt", ios::out | ios::app); // overwrite contents unless use "ios::out | ios::app"
    // hello<<"hello world ! how are you ?"<<endl;
    hello<<"we are doing fine. how about you ?"<<endl;
    hello.close();
    return 0;
}