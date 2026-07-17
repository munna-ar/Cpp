#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int town_judge(vector<vector<int>> v, int n){
        vector<int> data(n+1, 0);
        for(auto i: v){
            data[i[0]]--;
            data[i[1]]++;
        }
        for(int i=0; i<n; i++){
            if(data[i] == n-1) return i;
        }
        return -1;
    }
};
int main(){
    Solution a;
    cout<<a.town_judge({{1,3},{2,3},{4,3}}, 4);
    return 0;
}