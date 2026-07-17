#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int main(){
    cout<<factorial(5);
    // return 0;
}