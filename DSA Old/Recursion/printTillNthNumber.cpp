#include<bits/stdc++.h>
using namespace std;
int print_till_nth(int n){
    if(n == 0) return 0;
    print_till_nth(n-1);
    cout<<n<<" ";
}
int main(){
    print_till_nth(10);
    return 0;
}