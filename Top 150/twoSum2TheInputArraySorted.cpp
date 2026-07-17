#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> two_sum(vector<int> arr, int k){
        int lp = 0, rp = arr.size()-1;
        while(lp < rp){
            int total = arr[lp] + arr[rp];
            if(total == k){
                // cout<<lp+1<<" , "<<rp+1;
                // break;
                return {lp+1, rp+1};
            }
            else if(total > k){
                rp--;
            }
            else{
                lp++;
            }
        }
        return {-1, -1};
    }
};
int main(){
    Solution a;
    for(auto i: a.two_sum({2,7,11,15}, 9)){
        cout<<i<<" ";
    }
    return 0;
}