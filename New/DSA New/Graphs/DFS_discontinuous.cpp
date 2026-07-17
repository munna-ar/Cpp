#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void dfs(vector<int> arr[], vector<bool> &visited, int start){
    visited[start] = true;
    cout<<start<<" -> ";
    for(auto neighbor : arr[start]){
        if(!visited[neighbor]){
            dfs(arr, visited, neighbor);
        }
    }
}
void dfs_dis(vector<int> arr[], int size){
    vector<bool> visited(size+1, false);
    
    for(int i=1; i<=size; i++){
        if(!visited[i]){
            dfs(arr, visited, i);
        }
    }
}
int main(){
    int v = 9;
    vector<int> adj[v];
    vector<bool> visited(v+1, false);

    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 4);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
    add_edge(adj, 6, 8);

    dfs_dis(adj, v);
    return 0;
}
