#include<bits/stdc++.h>
using namespace std;
int main(){          
    // vector<int> v[3] = {{1,2},{2,5},{5,6}};
    vector<int> arr[5];
    arr[0].push_back(1);
    arr[0].push_back(2);
    arr[1].push_back(0);
    arr[1].push_back(2);
    arr[2].push_back(5);
    for(int i=0; i<3; i++){
        cout<<"{";
        for(auto j: arr[i]){
            cout<<" "<<j;
        }
        cout<<" } ";
    }
    return 0;
}