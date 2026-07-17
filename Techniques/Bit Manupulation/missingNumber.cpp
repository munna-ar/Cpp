#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missing_number(vector<int>arr){
        int ans = arr.size();
        for(int i=0; i<arr.size(); i++){
            ans = ans^i;
            ans = ans^arr[i];
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.missing_number({3,0,1});
    return 0;
}