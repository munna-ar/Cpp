#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 632432;

    int b = a % 10; // 2
    int c = a % 100; // 32
    int d = a % 1000; // 432

    cout<<b<<" "<<c<<" "<<d;

    return 0;
}