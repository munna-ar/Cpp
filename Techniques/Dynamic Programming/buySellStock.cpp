#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int buy_sell_stock(vector<int> arr){
    int min_price = INT_MAX;
    int max_profit = 0;
    for(int i=0; i<arr.size(); i++){
        min_price = min(min_price, arr[i]);
        max_profit = max(max_profit, (arr[i]-min_price));
    }
    return max_profit;
}
};
int main(){
    Solution a;
    cout<<a.buy_sell_stock({7,2,1,3,6,5});
    return 0;
}