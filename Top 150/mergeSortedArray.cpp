#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void merge_sorted_array(vector<int> arr1, int x, vector<int> arr2, int y){
        for(int i=0; i<y; i++){
            arr1.push_back(arr2[i]);
        }
        sort(arr1.begin(), arr1.end());
        for(auto i: arr1) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.merge_sorted_array({1,2,3}, 3, {2,4,5}, 3);
    return 0;
}