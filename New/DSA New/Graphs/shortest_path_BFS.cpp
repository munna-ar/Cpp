#include<bits/stdc++.h>
using namespace std;
 
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void shortest_path(vector<int> adj[], int v, int start){
    vector<bool> visited(v+1, false);
    vector<int> store, dis(v, INT_MAX);
    queue<int> que;

    dis[start] = 0;
    visited[start] = true;
    que.push(start);

    while(!que.empty()){
        int temp = que.front();
        que.pop();
        for(auto neighbor : adj[temp]){
            if(!visited[neighbor]){
                dis[neighbor] = dis[temp] + 1;
                visited[neighbor] = true;
                que.push(neighbor);
            }
        }
    }
    cout<<"Shortest path from "<<start<<"\n";
    for(int i=0; i<v; i++){
        cout<<i<<" -> "<<"path : "<<dis[i]<<"\n";
    }
}
int main(){
    int v = 4;
    vector<int> adj[v];

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 2);

    shortest_path(adj, v, 0);
    return 0;
}
