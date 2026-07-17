#include<bits/stdc++.h>
using namespace std;

int num_check(int num){
    if(num == 0) cout<<"Zero"<<endl;
    else if(num < 0) cout<<"Negative"<<endl;
    else cout<<"Positive"<<endl;
}
int main(){
    num_check(0);
    num_check(-1);
    num_check(2);
    return 0;
}