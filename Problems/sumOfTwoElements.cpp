#include<bits/stdc++.h>
using namespace std;

int sum_of_two_elements(vector<int>arr, int target){
    sort(arr.begin(), arr.end());
    int sum=0;
    for(int i=0; i<2; i++){
        sum += arr[i];
        if(sum == target){
            cout<<"found";
            break;
        }
    }
    for(int i=2; i<arr.size(); i++){
        sum += arr[i];
        sum -= arr[i-2];
        if(sum == target){
            cout<<"found";
            break;
        }
    }
}
int main(){
    sum_of_two_elements({1,2,3,4,5}, 8);
    return 0;
}