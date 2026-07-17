#include<bits/stdc++.h>
using namespace std;
int square(int n){
    if(n == 0 ) return 0;
    square(n-1);
    cout<<n<<" * "<<n<<" = "<<n*n<<endl;
}
int main(){
    square(5);
    return 0;
}