#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
void dfs_recur(vector<int> vec[], int s, vector<bool> &visited, vector<int> &ans){
    visited[s] = true;
    for(auto i: vec[s]){
        if(visited[i] == false){
            dfs_recur(vec, i, visited, ans);
        }
    }
    ans.push_back(s);
}
void topo_sort(vector<int> vec[], int v){
    vector<bool> visited(v+1, false);
    vector<int> ans;
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            dfs_recur(vec, i, visited, ans);
        }
    }
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int v = 5; // vertex
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 4);
    topo_sort(adj, v);
    return 0;
}