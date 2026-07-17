#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x <= 65 || x <= 91){
        x += 32;
        cout<<x;
    }
    else{
        x -= 32;
        cout<<x;
    }
    return 0;
}
