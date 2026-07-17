#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int>> k_closest_points(vector<vector<int>> points, int k){
        vector<vector<int>> store(k);
        priority_queue<vector<int>>heap;
        for(auto i: points){
            int x = i[0], y = i[1];
            heap.push({(x*x+y*y), x, y});
            if(heap.size() > k) heap.pop();
        }
        for(int i=0; i<k; i++){
            vector<int> top = heap.top();
            heap.pop();
            store[i] = {top[1], top[2]};
        }
    }
};
int main(){
    Solution a;
    return 0;
}