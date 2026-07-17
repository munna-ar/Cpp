#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int but_two_chocolates(vector<int> cost, int money){
        sort(cost.begin(), cost.end());
        int min1 = cost[0], min2 = cost[1];
        if((min1+min2) <= money) return money-(min1+min2);
        return money;
    }
};
int main(){
    Solution a;
    cout<<a.but_two_chocolates({2,3,3},6);
    return 0;
}