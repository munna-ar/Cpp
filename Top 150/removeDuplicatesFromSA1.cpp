#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int remove_elements(vector<int> arr){
        int k = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] != arr[i-1]){ // comparing each element with it's previous element
                arr[k] = arr[i]; // updating nums[k] with unique element nums[i]
                k++; // k, represents the lenght of non-target elements in the array
            }
        }
        return k;
    }
};
int main(){
    Solution a;
    cout<<a.remove_elements({0,0,1,1,1,2,2,3,3,4});
    return 0;
}