#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix(4, vector<int>(4,{0}));
    int n = matrix.size();
    for(int i=0; i<n; i++) matrix[0][i] = 1;
    for(int i=0; i<n; i++) matrix[i][0] = 1;
    for(int i=1; i<n; i++) matrix[1][i] = 2;
    for(int i=1; i<n; i++) matrix[i][1] = 2;
    for(int i=2; i<n; i++) matrix[2][i] = 3;
    for(int i=2; i<n; i++) matrix[i][2] = 3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}