#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int best_time(vector<int> prices){ // multiple transaction, as many as possible
        int lp = prices[0]; // 7
        int maxp = 0;
        for(int i=1; i<prices.size(); i++){
            if(lp < prices[i]){
                maxp += prices[i] - lp; // 4,3
            }
            lp = prices[i]; // 1,3,
        }
        return maxp;
    }
};
int main(){
    Solution a;
    cout<<a.best_time({7,1,5,3,6,4}); // 7
    return 0;
}