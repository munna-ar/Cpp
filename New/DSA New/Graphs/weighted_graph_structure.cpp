#include<bits/stdc++.h>
using namespace std;

int main(){
    int v = 5;
    vector<pair<int,int>> adj[v];

    adj[0].push_back({1,5});        // 0 -> 1 (weight = 5)
    adj[0].push_back({2,7});
    adj[1].push_back({2,4});        // 1 -> 2 (weight = 4)
    adj[1].push_back({4,1});
    adj[2].push_back({4,6});        // 2 -> 4 (weight = 6)
    adj[3].push_back({1,2});
    adj[4].push_back({2,3});
    
    // displaying elements
    for(int i=0; i<v; i++){
        cout<<i<<" ->"<<"\n";
        for(auto pair : adj[i]){
            cout<<"("<<pair.first<<", "<<"weight = "<<pair.second<<")"<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
