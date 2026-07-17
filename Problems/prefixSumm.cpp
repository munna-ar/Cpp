#include<bits/stdc++.h>
using namespace std;

int prefix_sum(vector<int>arr){
    vector<int>p_arr;
    p_arr.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        p_arr.push_back(arr[i] + p_arr[i-1]);
    }
    for(int i=0; i<p_arr.size(); i++){
        cout<<p_arr[i]<<" ";
    }
}

int main(){
    prefix_sum({3,1,5,6,2});
    return 0;
}