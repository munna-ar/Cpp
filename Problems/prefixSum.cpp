#include<bits/stdc++.h>
using namespace std;

int prefixSum(vector<int>arr, int left, int right){
    vector<int>pre;
    pre.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        pre.push_back(pre[i-1] + arr[i]);
    }                                      //pre{1,3,6,10,15}                                           
    if(left == 0){
        cout<<pre[right];
    }
    else{
        cout<<(pre[right] - pre[left-1]);
    }
}
int main(){
    prefixSum({1,2,3,4,5}, 2, 3);
    return 0;
}