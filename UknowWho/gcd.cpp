#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    int n, p = max(x, y);
    for(int i=1; i<p; i++){
        if(x % i == 0 && y % i == 0) n = i;
    }
    cout<<n<<endl;
}
int main(){
    gcd(8,4);
    gcd(10,5);
    gcd(12,6);
    return 0;
}
