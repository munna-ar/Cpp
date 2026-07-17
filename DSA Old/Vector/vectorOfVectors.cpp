#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> vec(5, vector<int> (5, -1));
    for(auto i: vec){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}