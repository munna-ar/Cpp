#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(n){
        cin>>n;
        if(n != 1999){
            cout<<"Wrong"<<endl;
            continue;
        }
        else if( n == 1999){
            cout<<"Correct";
            break;
        }
    }
    return 0;
}
