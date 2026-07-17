#include<iostream>
using namespace std;

void greetings(string name, int age, char grade){

    cout<<"hello "<<name<<", you are "<<age<<" years old and your grade is "<<grade<<endl;
}

int main(){

    greetings("munna",20,'A');

    return 0;
}