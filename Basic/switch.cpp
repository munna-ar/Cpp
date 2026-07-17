#include<iostream>
using namespace std;
string favNum(int a){
    string result;
    switch(a){
    case 1:
        result = "fav num 1";
        break;
    case 5:
        result = "fav num 5";
        break;
    case 7:
        result = "fiv num 7";
        break;
    default:
        result = "not in the list";
    }
    return result;
}
int main(){
    cout<<favNum(1)<<endl;
    cout<<favNum(7);
    return 0;
}