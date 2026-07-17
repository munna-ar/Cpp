#include<bits/stdc++.h>
using namespace std;
int print_from_n_to_one(int n){
    if(n == 0) return 0;
    else{
        cout<<n<<" ";
        print_from_n_to_one(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    print_from_n_to_one(n);
    return 0;
}
