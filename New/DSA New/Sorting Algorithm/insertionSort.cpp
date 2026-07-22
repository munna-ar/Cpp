#include<bits/stdc++.h>
using namespace std;

int insertionSort(vector<int>arr){
    for(int i=1; i<arr.size(); i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    insertionSort({5,0,1,3,4,2});   // compares with contiguos two elements
    return 0;
}