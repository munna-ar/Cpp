#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
}
void print(vector<pair<int,int>> vec[], int v, int s){
    for(int i=0; i<v; i++){
        cout<<i<<endl;
        for(auto j: vec[i]){
            cout<<j.first<<" "<<j.second<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int v = 4;
    vector<pair<int,int>> adj[v];
    add_edge(adj, 0, 1, 2);
    add_edge(adj, 0, 2, 4);
    add_edge(adj, 1, 2, 5);
    add_edge(adj, 2, 3, 1);
    print(adj, v, 0);
    return 0;
}