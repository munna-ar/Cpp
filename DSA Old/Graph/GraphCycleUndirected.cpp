#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
bool dfs_recur(vector<int> vec[], int s, vector<bool> &visited, int parent){
    visited[s] = true;
    for(auto i: vec[s]){
        if(visited[i] == false){
            if(dfs_recur(vec, i, visited, s)){
                return true;
            }
        }
        else if(i != parent){
            return true;
        }
    }
    return false;
}
bool dfs(vector<int> vec[], int v){
    vector<bool> visited(v+1, false);
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            if(dfs_recur(vec, i, visited, -1)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int v = 4;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    cout<<dfs(adj, v);
    return 0;
}