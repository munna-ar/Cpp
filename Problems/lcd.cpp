#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3, result;
    result = 0;
    cout<<"enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    for(int i=1; i<=(num1*num2*num3); i++){
        if(i%num1 == 0 && i%num2 == 0 && i%num3 == 0){
            result = i;
            break;
        }
    }
    cout<<"LCD is: "<<result;
    return 0;
}