#include<iostream>
using namespace std;
int main(){
    string b = "hello world";
    cout<<b.length()<<endl;
    cout<<b.find("o")<<endl;
    cout<<b.find("world")<<endl;
    cout<<b.substr(2,4)<<endl;
    return 0;
}