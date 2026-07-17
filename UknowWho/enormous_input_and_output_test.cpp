#include<bits/stdc++.h>
using namespace std;

long enormous(int x, int y){
    return (x*y);
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        cout<<enormous(a, b)<<"\n";
    }
    return 0;
}
