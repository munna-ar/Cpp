#include<iostream>
#include<stack>
using namespace std;
int main(){
    // push, pop, top, size, empty, 
    stack<int>num;
    stack<int>a;
    cout<<"size > "<<num.size()<<endl;        // tells how many element in the stack
    cout<<"empty > "<<num.empty()<<endl;      // checks if the stack is or not
    num.push(5);                 // push element to the end in the stack
    num.push(7);
    num.push(1);
    cout<<"size (after pushing) > "<<num.size()<<endl;
    cout<<"size (after pushing) > "<<num.empty()<<endl;
    num.pop();                 // remove the last element from the stack
    cout<<"size (after popping) > "<<num.size()<<endl;
    cout<<"top > "<<num.top()<<endl;     // takes the last element from the stack
    num.swap(a);                // swaps the value of two variables
    cout<<"swap > "<<a.top();

    return 0;
}