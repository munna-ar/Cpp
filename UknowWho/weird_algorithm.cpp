#include<bits/stdc++.h>
using namespace std;

void even();
void odd();
long long n = 3;
                                                 //    3 10 5 16, 8, 4, 
void odd(){
    if(n >= 1 && n % 2 != 0){
        cout<<n<<" ";
        n = n*3 + 1;
        even();
    }
    return;
}
void even(){
    if(n >= 1 && n % 2 == 0){
        cout<<n<<" ";
        n = n/2;
        odd();
    }
    return;
}
int main(){
    odd();
    return 0;
}
