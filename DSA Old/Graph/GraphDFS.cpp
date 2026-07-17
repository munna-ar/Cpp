#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> v[], int x, int y){
    v[x].push_back(y);
    v[y].push_back(x);
}
void dfs_recur(vector<int> vec[], int s, vector<bool> &visited){
    visited[s] = true;
    cout<<s<<" ";
    for(auto i: vec[s]){
        if(visited[i] == false){
            dfs_recur(vec, i, visited);
        }
    }
}
void dfs(vector<int> vec[], int n){
    vector<bool> visited(n+1, false);
    for(int i=0; i<n; i++){
        if(visited[i] == false){
            dfs_recur(vec, i, visited);
        }
    }
}
int main(){
    int v = 6;
    vector<int> adj[v];
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 3, 2);
    add_edge(adj, 4, 5);
    add_edge(adj, 1, 5);
    dfs(adj, v);
    return 0;
}