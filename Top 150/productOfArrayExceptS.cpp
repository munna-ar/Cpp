#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> product_of_array(vector<int> arr){
        vector<int> vec(arr.size(), 1);
        int left = 1;
        for(int i=0; i<arr.size(); i++){
            vec[i] = vec[i] * left;
            left = left * arr[i];
        }
        int right = 1;
        for(int i=arr.size()-1; i>=0; i--){
            vec[i] = vec[i] * right;
            right = right * arr[i];
        }
        for(auto i: vec) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.product_of_array({1,2,3,4});
    return 0;
}