#include<iostream>
#include<queue>
using namespace std;
int main(){
    //push, pop, empty, size, front, back, swap
    queue<int>num;
    queue<int>a;
    cout<<"size > "<<num.size()<<endl;
    cout<<"empty > "<<num.empty()<<endl;
    num.push(5);
    num.push(7);
    num.push(1);
    cout<<"size (after pushing) > "<<num.size()<<endl;
    cout<<"empty (after pushing) > "<<num.empty()<<endl;
    num.pop();
    cout<<"size >(after popping) "<<num.size()<<endl;
    cout<<"front > "<<num.front()<<endl;   // takes the first element from the queue
    cout<<"back > "<<num.back()<<endl;    // takes the last element from the queue
    num.swap(a);
    cout<<a.front()<<endl;

    return 0;
}