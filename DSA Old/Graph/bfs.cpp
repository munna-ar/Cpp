#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void bfs(vector<int> vec[], int v, int s){
    vector<bool> vis(v, false);
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto i: vec[x]){
            if(vis[i] == false){
                vis[i] =  true;
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
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 1);
    add_edge(adj, 3, 2);
    bfs(adj, 4, 0);
    return 0;
}