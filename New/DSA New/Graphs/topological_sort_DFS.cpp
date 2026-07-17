#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y); // one direction only
}

void dfs_recur(vector<int> adj[], vector<bool> &visited, stack<int> &st, int start){
    visited[start] = true;
    for(auto neighbor : adj[start]){
        if(!visited[neighbor]){
            dfs_recur(adj, visited, st, neighbor);
        }
    }
    st.push(start);
}
void topo_dfs(vector<int> adj[], int v){
    vector<bool> visited(v+1, false);
    stack<int> st;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            dfs_recur(adj, visited, st, i);
        }
    }
    for(int i=0; i<v; i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    int v = 5;
    vector<int> adj[v];

    add_edge(adj, 0, 1);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    add_edge(adj, 2, 4);
    add_edge(adj, 3, 4);

    topo_dfs(adj, v);
    return 0;
}