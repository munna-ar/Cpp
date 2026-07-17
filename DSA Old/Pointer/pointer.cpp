#include<iostream>
using namespace std;
int main(){
    /* "&" stores the address of the variable */
    /* "*pAge" stores the value that is located to the address "&age" */
    /* "pAge" stores the address of "age" variable */
    /* "*&age" stores the value of "age" variable */
    int age = 7;
    int *pAge = &age;
    cout<<&age<<endl;
    cout<<*pAge<<endl;
    cout<<pAge<<endl;
    cout<<*&age;

    return 0;
}