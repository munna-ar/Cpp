#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minimize_cost_to_move_chips(vector<int> arr){
        int odd = 0, even = 0, ans = 0;
        for(int i: arr){
            if(i%2 == 1) odd++;
            else even++;
            ans = min(odd, even);
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.minimize_cost_to_move_chips({1,2,2,3,4,4,5,5,5});
    return 0;
}