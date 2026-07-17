#include<iostream>
using namespace std;

double cube(double num){
    double result = num*num*num;
    return result;
}

int main(){

    cout<<cube(5)<<endl;
    cout<<cube(3);

    return 0;
}