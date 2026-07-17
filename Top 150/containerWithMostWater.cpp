#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int container_with(vector<int> water){
        int lp = 0, rp = water.size(), ans = 0;
        while(lp < rp){
            int width = rp - lp; // 9, 7, 
            int height = min(water[lp], water[rp]); // 1, 7, 
            int current = height * width; // 9, 49, 
            ans = max(ans, current); // 9, 49, 
            if(water[lp] < water[rp]) lp++;
            rp--;
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.container_with({1,8,6,2,5,4,8,3,7}); // size = 9
    return 0;
}