#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
bool cycle(vector<int> vec[], int s, vector<bool> visited, vector<bool> curr_visited){
    visited[s] = true;
    curr_visited[s] = true;
    for(auto i: vec[s]){
        if(visited[i] == false){
            if(cycle(vec, i, visited, curr_visited)) return true;
        }
        else if(visited[i] == true && curr_visited[i] == true) return true;
    }
    curr_visited[s] = false;
    return false;
}
bool dfs(vector<int> vec[], int v){
    vector<bool> visited(v+1, false), curr_visited(v+1, false);
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            if(cycle(vec, i, visited, curr_visited)) return true;
        }
    }
    return false;
}
int main(){
    int v = 3; // vertex
    vector<int> adj[v];
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 0);
    add_edge(adj, 2, 1);
    cout<<dfs(adj, v);
    return 0;
}