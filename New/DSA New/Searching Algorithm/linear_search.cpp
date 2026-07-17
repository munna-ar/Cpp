#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 50, arr[6] = {20, 10, 30, 50, 40, 60}, x;
    bool found = false;
    sort(arr, arr+6);           // {10,20,30,40,50,60}
    for(int i=0; i<6; i++){
        if(arr[i] == n){
            found = true;
            x = i + 1;
        }
    }
    if(found) cout<<x;
    else cout<<-1;

    return 0;
}