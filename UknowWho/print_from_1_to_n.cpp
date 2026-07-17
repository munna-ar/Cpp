#include<bits/stdc++.h>
using namespace std;

int print_from_one_to_n(int n){
    if(n == 0) return 1;
    else{
        print_from_one_to_n(n-1);
        cout<<n<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    print_from_one_to_n(n);
    return 0;
}
