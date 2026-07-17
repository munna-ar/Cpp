#include<bits/stdc++.h>
using namespace std;        //           Static Polymorphism has two features
                            //     1. Function overloading      2. Operator overloading
class math{
public:                     // same function behaves differently, one interface many implementation
    int add(int a, int b){
        return a + b;
    }
    double add(double x, double y){
        return x + y;
    }
};
int main(){
    math perform;
    cout<<perform.add(3, 7)<<"\n";
    cout<<perform.add(4.5, 8.2);
    return 0;
}
