#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void bfs_recur(vector<int> vec[], int s, vector<bool> &visited, vector<int> &value, queue<int> &q){
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(auto i: vec[temp]){
            if(visited[i] == false){
                visited[i] = true;
                value[i] = value[temp] + 1;
                q.push(i);
            }
        }
    }
}
void bfs(vector<int> vec[], int v, int s){
    vector<int> value(v+1, 0);
    vector<bool> visited(v+1, false);
    queue<int> q;
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            bfs_recur(vec, i, visited, value, q);
        }
    }
    for(int i=0; i<v; i++){
        cout<<i<<" > ";
        for(int j=i; j<=i; j++){
            cout<<value[j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v = 5;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 4);
    bfs(adj, v, 0);
    return 0;
}