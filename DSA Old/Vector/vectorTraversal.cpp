#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {0, 1, 3, 1};
    for(int i=0; i<4; i++){
        cout<<i<<" > ";
        for(int j=i; j<i+1; j++){
            cout<<v[j];
        }
        cout<<endl;
    }
    return 0;
}