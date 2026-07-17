#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int take_gifts_from(vector<int> piles, int k){
        int sum = 0;
        priority_queue<int> pq;
        for(auto i: piles) pq.push(i);
        while(k--){
            int tem = pq.top();
            pq.pop();
            pq.push(sqrt(tem));
        }
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
int main(){
    Solution a;
    cout<<a.take_gifts_from({25,64,9,4,100}, 4);
    return 0;
}