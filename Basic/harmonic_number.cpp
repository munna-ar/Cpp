#include<bits/stdc++.h>
using namespace std;
 
int main(){      //        1 + 1/2 + 1/3 + 1/4 + ..... + 1/n
    int nth;
    cout<<"Nth number : ";
    cin>>nth;
    double i, sum = 0.0;
    for(i=1; i<=nth; i++){
        sum += 1 / i;
    }
    cout<<setprecision(4)<<sum;
    return 0;
}