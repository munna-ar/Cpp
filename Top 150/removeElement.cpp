#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int remove_element(vector<int> arr, int val) {
        int k = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] != val){    // meeting all non-target elements and increasing it's quantity
                arr[k] = arr[i]; // updating nums[k] with unique element nums[i]
                k++; // k, represents the lenght of non-target elements in the array
            }
        }
        return k;
    }
};
int main(){
    Solution a;
    cout<<a.remove_element({0,1,2,2,3,4,0,2},2);
    return 0;
}