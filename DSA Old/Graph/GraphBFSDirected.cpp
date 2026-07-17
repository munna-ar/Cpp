#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
void bfs_recur(vector<int> vec[], int s, vector<bool> &visited, queue<int> &q){
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto i: vec[temp]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
void bfs(vector<int> vec[], int v){
    vector<bool> visited(v+1, false);
    queue<int> q;
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            bfs_recur(vec, i, visited, q);
        }
    }
}
int main(){
    int v = 4;
    vector<int> adj[v];
    add_edge(adj, 0, 3);
    add_edge(adj, 0, 2);
    add_edge(adj, 3, 1);
    bfs(adj, v);
    return 0;
}