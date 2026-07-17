#include<bits/stdc++.h>
using namespace std;

bool even(int n){
    if(n == 0) return 1;
    else if(n % 2 == 0) return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(even(i)) cout<<arr[i]<<" ";
    }
    return 0;
}
