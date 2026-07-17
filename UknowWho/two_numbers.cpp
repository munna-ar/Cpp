#include<bits/stdc++.h>
using namespace std;

double two_numbers(double x, double y){
    double a = x / y;
    cout<<"floor "<<x<<"/"<<y<<" = "<<floor(a)<<endl;
    cout<<"ceil "<<x<<"/"<<y<<" = "<<ceil(a)<<endl;
    cout<<"round "<<x<<"/"<<y<<" = "<<round(a);
}
int main(){
    two_numbers(10,4);
    return 0;
}
