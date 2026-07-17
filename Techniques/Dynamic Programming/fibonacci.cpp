#include<bits/stdc++.h>
using namespace std;
int main(){
    int first, second, next, limit;
    cout<<"enter first and second number:"<<endl;
    cin>>first>>second;
    cout<<"enter limit: ";
    cin>>limit;
    for(int i=0; i<limit+1; i++){
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;

    }
    return 0;
}