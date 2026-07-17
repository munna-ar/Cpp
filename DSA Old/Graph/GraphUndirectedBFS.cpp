#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void bfs(vector<int> vec[], int v, int s){
    vector<bool> visited(v+1, false);
    queue<int> q;
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
int main(){
    int v = 4;
    vector<int> adj[v];
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 3, 2);
    add_edge(adj, 2, 1);
    add_edge(adj, 1, 3);
    bfs(adj, v, 0);
    return 0;
}