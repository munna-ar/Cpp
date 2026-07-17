#include<bits/stdc++.h>
using namespace std;

int max2Sum(vector<int>arr){
    sort(arr.begin(), arr.end());
    vector<int>store;
    int sum = 0;
    for(int i=arr.size()-1; i>arr.size()-3; i--){
        sum += arr[i];
    }
    cout<<sum;
}
int main(){
    max2Sum({6,1,8,2,9});
    return 0;
}