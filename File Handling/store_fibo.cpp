#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ofstream op("fibo.txt");
    if(!op){
        cout<<"Cannot open file";
        return 1;
    }
    int first = 0, second = 1, next, limit;
    cout<<"Limit : ";
    cin>>limit;
    for(int i=1; i<=limit; i++){
        op << first <<" ";
        next = first + second;
        first = second;
        second = next;
    }
    op.close();
    return 0;
}