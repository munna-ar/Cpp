#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v = {       // each row is a dynamic vector of vectors
        {1,2,3}, // row 1
        {4,5,6}, // row 2
        {7,8,9} // row 3
    };
    v.push_back({1,2,3}); // row 4
    v.push_back({4,5,6}); // row 5
    v.push_back({2,3,4}); // row 6
    // for(auto i: v){
    //     for(auto j: i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[0][2]<<endl;
    cout<<v[1][0]<<" "<<v[1][1]<<" "<<v[1][2]<<endl;
    cout<<v[2][0]<<" "<<v[2][1]<<" "<<v[2][2]<<endl;
    cout<<endl;
    cout<<v.size();
    return 0;
}