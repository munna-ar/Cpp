#include<bits/stdc++.h>
using namespace std; // sliding window technique
class Solution{
    public:
    double maximum_average_subarray(vector<int>arr, int k){
    sort(arr.begin(), arr.end());
    double sum = 0, current_average = 0, average = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];               // sum = 6
    }
    for(int i=k; i<arr.size(); i++){
        sum += arr[i];              // 10,14
        sum -= arr[i-k];            // 9,12,
        current_average = sum / k;  // 3,4
        average = max(current_average, average); // 3,4
    }
    cout<<average;
}
};
int main(){
    Solution a;
    a.maximum_average_subarray({1,2,3,4,5}, 3);// 4.00
    return 0;
}