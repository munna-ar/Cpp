#include<bits/stdc++.h>
using namespace std;

int pointer(int *a, int *b){ // pass by pointers
    int s = *a + *b;
    int d = abs(*a - *b);
    cout<<s<<"\n"<<d;
};

int main(){
    int a, b;
    cin>>a>>b;
    pointer(&a, &b); // pass by reference
    return 0;
}
