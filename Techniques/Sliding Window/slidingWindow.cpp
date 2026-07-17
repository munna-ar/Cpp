#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int max_sum_of_two(vector<int>arr, int k){
    sort(arr.begin(), arr.end());
    int sum=0, max_sum=0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }
    for(int i=k; i<arr.size(); i++){
        sum += arr[i];
        sum -= arr[i-k];
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}
};
int main(){
    Solution a;
    cout<<a.max_sum_of_two({4,2,9,1,5,6}, 2);
    return 0;
}