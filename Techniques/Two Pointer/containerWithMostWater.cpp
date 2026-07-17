#include<bits/stdc++.h>
using namespace std; // two pointer technique
class Solution{
    public:
    int container_with_most_water(vector<int>arr){
    int lp=0, rp=arr.size()-1, max_water = 0;
    while(lp < rp){
        int width = rp - lp; // 3,2,1,
        int height = min(arr[lp], arr[rp]); // 1,4,3,
        int current_water = width * height; // 3,8,3,
        max_water = max(max_water, current_water); // 3,8,3
        if(arr[lp] < arr[rp]) lp++;
        else rp--;
    }
    cout<<max_water;
}
};
int main(){
    Solution a;
    a.container_with_most_water({1,7,2,4,3,5,6,3,8}); // 8
    return 0;
}