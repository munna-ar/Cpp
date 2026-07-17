#include<bits/stdc++.h>
using namespace std;

void even(int num){
    if(num%2 == 0) cout<<num <<" is even"<<endl;
    else cout<<num<<" is odd"<<endl;
}
void odd(int num){
    if(num%2 != 0) cout<<num<<" is odd";
    else cout<<num<<" is even";
}
int main(){
    even(32);
    odd(57);
    return 0;
}