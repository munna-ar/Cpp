#include<bits/stdc++.h>
using namespace std;
int main(){
    int first = 0, second = 1, next, limit;
    cin>>limit;
    for(int i=0; i<limit; i++){
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
