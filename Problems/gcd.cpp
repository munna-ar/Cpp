#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3,result, maxx;
    cout<<"enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    maxx = max(num1,num2);
    maxx = max(maxx,num3);
    for(int i=1; i<=maxx; i++){
        if(num1%i == 0 && num2%i == 0 && num3%i == 0){
            result = i;
        }
    }
    cout<<"GCD is: "<<result;
    
    return 0;
}