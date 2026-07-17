#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void dfs(vector<int> arr[], vector<bool> &visited, int start){ // One node and its neighbor becomes next node
    visited[start] = true;
    cout<<start<<" -> ";
    for(auto neighbor : arr[start]){
        if(!visited[neighbor]){
            dfs(arr, visited, neighbor);
        }
    }
}
int main(){
    int v = 7;
    vector<int> adj[v];
    vector<bool> visited(v, false);

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 5);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 5);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 1);

    dfs(adj, visited, 0);
    return 0;
}
