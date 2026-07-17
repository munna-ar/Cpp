#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 0) return true;
    else{
        cout<<"I love Recursion"<<"\n";
        fun(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}
