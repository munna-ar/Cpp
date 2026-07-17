#include<bits/stdc++.h>
using namespace std;         //    2 3 4 3 2

bool judge(int x, int y){
    return x == y;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l = 0, r = n - 1;
    bool a = true;
    while(l <= r){
        if(!(judge(arr[l], arr[r]))) a = false;
        l++;
        r--;
    }
    if(a) cout<<"Yes";
    else cout<<"No";
    return 0;
}
