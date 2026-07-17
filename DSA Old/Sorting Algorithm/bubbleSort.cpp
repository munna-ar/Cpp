#include<bits/stdc++.h>
using namespace std;
int bubbleSort(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    bubbleSort({0,5,2,1,4,3});    // compares with one element
    return 0;
}