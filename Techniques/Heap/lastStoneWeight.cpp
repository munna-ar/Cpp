#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int last_stone_weight(vector<int> stones){
        priority_queue<int>pq(stones.begin(), stones.end());
        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x != y){
                pq.push(abs(x - y));
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
int main(){
    Solution a;
    cout<<a.last_stone_weight({2,4,7,1,8,1});
    return 0;
}