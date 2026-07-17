#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int three_sum(vector<int>arr, int target){
    sort(arr.begin(), arr.end());
    int low = 0;                   // ({1,2,3,4,5,6,7}, 13)
    int high = arr.size()-1;
    int rem = target - arr[low];
    for(int i=1; i<arr.size(); i++){
        while(i < high){
            int sum = arr[high] + arr[i];
            if(sum == rem){
                cout<<arr[low]<<","<<arr[i]<<","<<arr[high];
                break;
            }
            else if(sum < rem){
                low++;
            }
            else{
                high--;
            }
        }
        break;
    }
}
};
int main(){
    Solution a;
    a.three_sum({1,2,3,4,5,6,7}, 15);
    return 0;
}