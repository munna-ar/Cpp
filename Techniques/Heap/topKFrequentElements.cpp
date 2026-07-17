#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int top_k_frequent_elements(vector<int> arr, int k){
        map<int,int>mp;
        priority_queue<pair<int,int>>heap;
        for(auto i: arr) mp[i]++;
        for(auto i: mp) heap.push({i.second, i.first});
        while(k--){
            cout<<heap.top().second<<" ";
            heap.pop();
        }

    }
};
int main(){
    Solution a;
    a.top_k_frequent_elements({1,1,1,2,2,3}, 2);
    return 0;
}