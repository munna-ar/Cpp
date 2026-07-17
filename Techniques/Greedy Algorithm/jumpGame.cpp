#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool jump_game(vector<int> arr){
        int goal = arr.size()-1;
        for(int i=arr.size()-2; i>=0; i--){
            if(i + arr[i] >= goal) goal = i;
        }
        return goal == 0;
    }
};
int main(){
    Solution a;
    cout<<a.jump_game({2,3,1,1,4}); // goal = 4,3,2,1,0
    return 0; //       0 1 2 3 4
}