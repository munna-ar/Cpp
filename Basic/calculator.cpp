#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, result;
    char ch;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter operator: ";
    cin>>ch;
    cout<<"enter second number: ";
    cin>>num2;
    switch(ch){
        case '+':
            result = num1 + num2;
            cout<<"summation is: "<<result;
            break;
        case '-':
            result = abs(num1-num2);
            cout<<"substraction is: "<<result;
            break;
        case '*':
            result = num1 * num2;
            cout<<"multiplication is: "<<result;
            break;
        case '/':
            if(num2 == 0){
                cout<<"error zero division";
                break;
            }
            else{
                result = num1 / num2;
                cout<<"division is: "<<result;
                break;
            }
        default:
            cout<<"invalid operator";
    }
    return 0;
}