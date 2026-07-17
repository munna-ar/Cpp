#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int jump_game(vector<int> jump){
        int n = jump.size();
        int rp = n-1;
        int goal = jump[n-1];
        for(int i=n-2; i>=0; i--){
            if(i+jump[i] >= goal){
                goal = i;
                rp--;              // if we can reach at the 0th position from the end then we got it
            }
        }
        if(rp == 0) return 1;
        return 0;
    }
};
int main(){
    Solution a;
    cout<<a.jump_game({2,3,1,1,4}); cout<<endl;
    cout<<a.jump_game({3,2,1,0,4});
    return 0;
}