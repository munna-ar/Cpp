#include<bits/stdc++.h>
using namespace std;
class cal{
    int x, y, res;
    public:
    void sum();
    void sub();
    void mul();
    void div();
} hello; // same (creating an object)
// cal hello; same (creating an object)
void cal :: sum(){
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    res = x + y;
    cout<<"Result: "<<res;
}
void cal :: sub(){
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    res = abs(x - y);
    cout<<"Result: "<<res;
}
void cal :: mul(){
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    res = x * y;
    cout<<"Result: "<<res;
}
void cal :: div(){
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    res = x / y;
    cout<<"Result: "<<res;
}
int main(){
    int n;
    cout<<"1 > Summation"<<endl;
    cout<<"2 > Subtraction"<<endl;
    cout<<"3 > Multiplication"<<endl;
    cout<<"4 > Division"<<endl;
    cout<<"0 > Exit"<<endl;
    cout<<"Select: ";
    cin>>n;
    
    switch(n){
        case 1:
            hello.sum();
        break;
        case 2:
            hello.sub();
        break;
        case 3:
            hello.mul();
        break;
        case 4:
            hello.div();
        break;
        case 0:
            return 0;
        break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}