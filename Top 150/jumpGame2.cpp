#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int jump_game(vector<int> arr){
        int lp = 0, rp = 0, jumps = 0, far = 0;
        while(rp < arr.size()-1){ // (0 < 4), (2 < 4), ( 4 == 4)
            for(int i=lp; i<= rp; i++){
                far = max(far, (i + arr[i])); // 2, 4, 
            }
            lp = rp + 1; // 1, 3
            rp = far; // 2, 4
            jumps++; // 1, 2
        }
        return jumps;
    }
};
int main(){
    Solution a;
    cout<<a.jump_game({2,3,1,1,4});
    return 0;
}