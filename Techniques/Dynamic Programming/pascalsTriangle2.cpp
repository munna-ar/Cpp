#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> pascals_triangle(int row){
    vector<int> store(row+1, 1);
    for(int i=1; i<row; i++){
        for(int j=i; j>0; j--){
            store[j] += store[j-1];
        }
    }
    for(int i=0; i<=row; i++){
        cout<<store[i]<<" ";
    }
    // return store;
}
};
int main(){
    Solution a;
    a.pascals_triangle(4);
    return 0;
}