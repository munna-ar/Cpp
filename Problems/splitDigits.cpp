#include<bits/stdc++.h>
using namespace std;

int split_digits(int num){
    vector<int> store;
    while(num>0){
        store.push_back(num%10);
        num /= 10;
    }
    sort(store.begin(), store.end());
    for(int items: store) cout<<items<<" ";
}
int main(){
    split_digits(2351);
    return 0;
}