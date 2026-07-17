#include<iostream>
using namespace std;
int max(int a, int b, int c){
    int result;
    if(a>b && a>c){
        result = a;
    }
    else if(b>a && b>c){
        result = b;
    }
    else{
        result = c;
    }
    return result;
}
int main(){

    cout<<max(11,22,33)<<endl;
    return 0;
}