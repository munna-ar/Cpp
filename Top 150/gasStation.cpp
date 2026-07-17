#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int gas_station(vector<int> gas, vector<int> cost){
        int diff = 0, total_diff = 0, ans = 0;
        for(int i=0; i<gas.size(); i++){
            diff = gas[i] - cost[i];
            total_diff += diff;
            if(diff < 0){
                diff = 0;
                ans++;
            }
        }
        return (total_diff < 0) ? -1 : ans;
    }
};
int main(){
    Solution a;
    cout<<a.gas_station({1,2,3,4,5}, {3,4,5,1,2});
    return 0;
}