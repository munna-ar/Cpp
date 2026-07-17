#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr, n, sum = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        sum += a;
    }
    cout<<abs(sum);
    return 0;
}
