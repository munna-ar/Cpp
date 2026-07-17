#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void bfs(vector<int> arr[], vector<bool> &visited, int start){ // Onde node and its neighbor
    visited[start] = true;
    queue<int> que;
    
    que.push(start);

    while(!que.empty()){
        int node = que.front();
        que.pop();
        cout<<node<<" -> ";
        
        for(auto neighbor : arr[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                que.push(neighbor);
            }
        }
    }
}
void bfs_dis(vector<int> arr[], int size){
    vector<bool> visited(size+1, false);
    for(int i=0; i<size; i++){
        if(!visited[i]){
            bfs(arr, visited, i);
        }
    }
}
int main(){
    int n = 7;
    vector<int> adj[n];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 2, 3);
    add_edge(adj, 4, 5);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 4);

    bfs_dis(adj, n);
    return 0;
}
