#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int find_k_closest_elements(vector<int> arr, int k, int x){
        priority_queue<pair<int,int>> heap;
        vector<int> ans;
        for(auto i: arr){
            heap.push({abs(x-i), i});
            if(heap.size() > k) heap.pop();
        }
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        sort(ans.begin(), ans.end());
        for(auto i: ans) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.find_k_closest_elements({1,4,2,3,5}, 4, 3);
    return 0;
}