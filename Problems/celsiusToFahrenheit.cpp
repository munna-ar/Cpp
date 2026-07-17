#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, result;
    cout<<"enter Celsius scale and get it's Fahrenheit scale: ";
    cin>>a;
    result = ((a*9)+(5*32))/5;
    cout<<"result is "<<result;
}