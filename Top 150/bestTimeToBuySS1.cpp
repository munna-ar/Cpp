#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int best_time(vector<int> prices){ // just one highest transaction
        int lp = prices[0]; // 7, lp is min value
        int maxp = 0;
        for(int i=1; i<prices.size(); i++){
            if(lp < prices[i]){
                maxp = max(maxp, (prices[i] - lp)); // 4,5,
            }
            lp = min(lp, prices[i]); // 1,1,1
        }
        return maxp;
    }
};
int main(){
    Solution a;
    cout<<a.best_time({7,1,5,3,6,4});
    return 0;
}