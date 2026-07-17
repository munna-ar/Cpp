#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
    vec[y].push_back(make_pair(x, w));
}
// minimum spanning tree
int prims_algo(vector<pair<int,int>> vec[], int v){
    int res = 0;
    vector<int> dis(v, INT_MAX);
    vector<bool> vis(v, false);
    dis[0] = 0;
    for(int i=0; i<v; i++){
        int u = -1;
        for(int i=0; i<v; i++){
            if(vis[i] == false && (u==-1 || dis[i] < dis[u])){
                u = i;
            }
        }
        vis[u] = true;
        res += dis[u];
        for(auto i: vec[u]){
            if(vis[i.first] == false && (i.first) != 0){
                dis[i.first] = min(dis[i.first], (i.second));
            }
        }
    }
    cout<<res;
}
int main(){
    int v=4;
    vector<pair<int,int>> adj[v];
    add_edge(adj, 0, 1, 5);
    add_edge(adj, 0, 2, 8);
    add_edge(adj, 1, 2, 10);
    add_edge(adj, 1, 3, 15);
    add_edge(adj, 2, 3, 20);
    prims_algo(adj, v);
    return 0;
}