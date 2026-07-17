#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 50, arr[7] = {10,30,50,40,60,70,20};
    int left = 0, right = 7-1, x;
    bool found = false;
    sort(arr, arr+6);                // {10,30,40,50,60,70}
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == n){
            found = true;
            x = mid + 1;
            break;
        }
        else if(arr[mid] < n) left++;
        else right--;
    }
    if(found) cout<<x;
    else cout<<-1;

    return 0;
}