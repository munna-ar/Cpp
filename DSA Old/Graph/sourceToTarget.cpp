#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
int dfs_recur(vector<int> vec[], vector<vector<int>> &v1, vector<int> &v2, vector<bool> &vis, int v, int s){
    vis[s] = true;
    v2.push_back(s);
    if(s == v-1){
        v1.push_back(v2);
    }
    else{
        for(auto i: vec[s]){
            dfs_recur(vec, v1, v2, vis, v, i);
        }
    }
    v2.pop_back();
}
void source_to_target(vector<int> vec[], int v, int s){
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> vis(v, false);
    for(int i=0; i<v; i++){
        if(vis[i] == false){
            dfs_recur(vec, ans, path, vis, v, i);
        }
    }
    for(int i=0; i<v; i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v = 4;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    source_to_target(adj, v, 0);
    return 0;
}