// In the name of Allah
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, op, result;
    cout<<"1 > Sum"<<endl;
    cout<<"2 > Sub"<<endl;
    cout<<"3 > Multiply"<<endl;
    cout<<"4 > Divide"<<endl;
    cout<<"Select : ";
    cin>>op;
    switch(op){
        case 1:
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            result = x + y;
            cout<<"result : "<<result;
            break;
        case 2:
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            result = x-y;
            cout<<"result : "<<result;
            break;
        case 3:
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            result = x*y;
            cout<<"result : "<<result;
            break;
        case 4:
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            result = x/y;
            cout<<"result : "<<result;
            break;
        default:
            cout<<"Invalid operator";
    }
    return 0;
}