#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> minimum_subsequence(vector<int> arr){
        vector<int> store;
        int sum = 0, new_sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];                           // sum = 15
        }
        sort(arr.begin(), arr.end(), greater<>());   // 5,4,3,2,1      (decreasing order)
        for(int i=0; i<arr.size(); i++){
            new_sum += arr[i];                      // new_sum = 5+4 = 9
            sum = sum - arr[i];                    // sum = 10,6
            store.push_back(arr[i]);              // 5,4
            if(new_sum > sum) break;             // false, true   (when true it breaks the loop)
        }
        sort(arr.begin(), arr.end(), greater<>());
        for(int i: store) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.minimum_subsequence({3,2,4,1,5});
    return 0;
}