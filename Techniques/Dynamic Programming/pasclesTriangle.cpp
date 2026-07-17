#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> pascles_triangle(int row){
    vector<vector<int>> store;
    vector<int> prev_row;

    for(int i=0; i<=row; i++){
        vector<int> curr_row(i+1, 1);
        for(int j=1; j<i; j++){
            curr_row[j] = prev_row[j] + prev_row[j-1];
        }
        store.push_back(curr_row);
        prev_row = curr_row;
    }
    for(int i=0; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<store[i][j]<<" ";
        }
        cout<<1<<" "<<endl;
    }
}
};
int main(){
    Solution a;
    a.pascles_triangle(3);
    return 0;
}