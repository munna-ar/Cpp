#include<bits/stdc++.h>
using namespace std;
class operate{
    public:
        int a, b;
        int sum(int a1, int b1){
            a=a1;
            b=b1;
            cout<<a+b<<endl;
        }
        int substraction(int a1, int b1){
            a = a1;
            b = b1;
            cout<<a-b<<endl;
        }
        int multiplication(int a1, int b1){
            a = a1;
            b = b1;
            cout<<a*b<<endl;
        }
        int division(int a1, int b1){
            a = a1;
            b = b1;
            cout<<a/b<<endl;
        }

};

int main(){
    operate get;
    get.sum(1,6);
    get.substraction(8,1);
    get.multiplication(1,7);
    get.division(49,7);
    return 0;
}