#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 = 1, num2 = 6, sum;
    int *p1 = &num1;
    int *p2 = &num2;
    sum = *p1 + *p2;
    cout<<sum;
    return 0;
}