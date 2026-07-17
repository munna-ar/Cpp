#include<iostream>
using namespace std;

int main() {
    double a, b, c;
    cout<<"enter three numbers and see which is medium"<<endl;
    cin>>a>>b>>c;
    
    if (a>b && b>c || c>b && b>a) {
        cout<<b<<" is middle number"<<endl;
    }
    else if (b>a && a>c || c>a && a>b) {
        cout<<a<<" is middle number"<<endl;
    }
    else if (c>a && a>b || b>c && c>a) {
        cout<<c<<" is middle number"<<endl;
    }
    
}