#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int intersection_of_two_arrays(vector<int> arr1, vector<int> arr2){
        set<int> set1(arr1.begin(), arr1.end()); // including all arr1's elements to set1
        vector<int> ans;
        for(auto i: arr2){
            if(set1.count(i)){
                ans.push_back(i);
                set1.erase(i);
            }
        }
        for(auto i: ans) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.intersection_of_two_arrays({1,2,3}, {7,2,5,1});
    return 0;
}