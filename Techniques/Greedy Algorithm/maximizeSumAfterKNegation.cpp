#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximize_sum_after_k_negation(vector<int> arr, int k){
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0;
        int sum = 0; // before {-3, -2, 4}
        while (k>0 && n>0 && arr[i] < 0){ // if negative elements found
            arr[i] *= -1;
            i++;
            k--;
        }          // after {3,2,4}
        if (k%2 == 1){
            sort(arr.begin(), arr.end()); // increasing order {2,3,4}
            arr[0] *= -1;                // finally {-2,3,4}
        }
        for(int items: arr){
            sum += items;
        }
        return sum;
    }
};
int main(){
    Solution a;
    cout<<a.maximize_sum_after_k_negation({-2,-3,4}, 3); 
    return 0;
}