#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void bfs(vector<int> arr[], vector<bool> &visited, int start){ // Onde node and its neighbor
                                                               // then the next node
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
int main(){
    int n = 7;
    vector<int> adj[n];
    vector<bool> visited(n+1, false);
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 5);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 5);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 1);

    bfs(adj, visited, 0);
    return 0;
}
