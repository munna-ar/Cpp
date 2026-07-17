#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, result;
    cout<<"enter Fahrenheit scale and get it's Celsius scale: ";
    cin>>a;
    result = (a-32)/(9*5);
    cout<<"result is "<<result;
}