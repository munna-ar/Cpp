#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void bfs_recur(vector<int> adj[], int s, vector<bool> &visited, queue<int> &q){
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto i: adj[temp]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
void bfs(vector<int> adj[], int v){
    vector<bool> visited(v+1, false);
    queue<int> q;
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            bfs_recur(adj, i, visited, q);
        }
    }
}
int main(){
    int v = 6; // vertex
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    bfs(adj, 6);
    return 0;
}