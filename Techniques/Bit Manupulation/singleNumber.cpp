#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int single_number(vector<int> nums){
        int ans = 0;
        for(auto i: nums){
            ans = i ^ ans;
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.single_number({4,1,2,1,2});
    return 0;
}