#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
}
// shortest path in directed acyclic graph
vector<int> dijkstras_algo(vector<pair<int,int>> vec[], int v, int s){
    vector<int> dis(v, INT_MAX);
    vector<bool> vis(v, false);
    dis[s] = 0;
    for(int i=0; i<v; i++){
        int u = -1;
        for(int i=0; i<v; i++){             // dis[0] = 0
            if(vis[i] == false && (u ==- 1 || dis[i] < dis[u])){    // dis[-1] is a big number (to infinity)
                u = i; // u = 0,
            } //                  from second iteration u is no longer -1
        }
        vis[u] = true;
        for(auto j: vec[u]){
            if(vis[j.first] == false && (j.second) != 0){
                dis[j.first] = min(dis[j.first], (dis[u] + j.second));
            }
        }
    }
    cout<<"From source 0"<<"\n";
    for(int i=0; i<v; i++){
        cout<<i<<" -> dis = "<<dis[i]<<endl;
    }
}
int main(){
    int v = 4;
    vector<pair<int,int>> adj[v];
    add_edge(adj, 0, 1, 50);
    add_edge(adj, 0, 2, 100);
    add_edge(adj, 1, 2, 30);
    add_edge(adj, 1, 3, 200);
    add_edge(adj, 2, 3, 20);
    dijkstras_algo(adj, v, 0);
    return 0;
}