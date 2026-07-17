#include<iostream>
using namespace std;

int power(int base, int index){
    int result = 1;
    for(int i = 0; i<index; i++){
        result *= base;
    }
    return result;
}

int main(){
    cout<<power(2,4)<<endl;
    cout<<power(3,3)<<endl;
    return 0;
}