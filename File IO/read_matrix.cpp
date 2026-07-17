#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("matrix.txt");

    int r, c;
    in >> r >> c; // takes one by one as input
     
    int mat[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            in >> mat[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    in.close();
    return 0;
}