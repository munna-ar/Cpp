#include<bits/stdc++.h>
using namespace std;
int main(){                       // 2d vector matrix is a 2d dynamic matrix
    vector<int> matrix[2][2];
    matrix[0][0].push_back(1);
    matrix[0][0].push_back(11);
    matrix[0][1].push_back(2);
    matrix[1][0].push_back(3);
    matrix[1][1].push_back(4);
    for(int i=0; i<2; i++){
        for(auto j: matrix[i]){
            cout<<"( ";
            for(auto k: j){
                cout<<k<<" ";
            }
            cout<<" ) ";
        }
        cout<<endl;
    }
    return 0;
}