#include<bits/stdc++.h>
using namespace std;

int summation(int n){
    int sum = 0;
    sum += n;
    return sum; 
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int x, sum = 0;
        cin>>x;
        int arr[x];
        for(int i=0; i<x; i++) cin>>arr[i];
        for(int i=0; i<x; i++){
            sum += summation(arr[i]);
        }
        cout<<"Case "<<n<<" : "<<sum<<"\n";
    }
    return 0;
}
