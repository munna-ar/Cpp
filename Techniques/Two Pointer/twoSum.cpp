#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int two_sum(vector<int>arr, int target){
    sort(arr.begin(), arr.end());
    int low = 0;
    int high = arr.size()-1;
    bool value = true;                // ({1,2,3,4,5}, 3)
    for(int i=0; i<arr.size(); i++){
        int sum = arr[low] + arr[high];
        if(sum == target){
            cout<<arr[low]<<","<<arr[high];
            value = false;
            break;
        }
        else if(sum < target){
            low++;
        }
        else{
            high--;
        }
    }
    if(value){
        cout<<"-1";
    }
}
};
int main(){
    Solution a;
    a.two_sum({1,2,3,4,5}, 7);
    return 0;
}