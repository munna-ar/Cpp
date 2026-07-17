#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y); // one direction only
}

void topo_sort(vector<int> adj[], int v){
    vector<int> indegree(v+1, 0);    // indegree means number of incoming edges
    queue<int> que;
    for(int i=0; i<v; i++){
        for(auto neighbor : adj[i]){
            indegree[neighbor]++;    // updating each node incoming edges
        }
    }
    for(int i=0; i<v; i++){
        if(indegree[i] == 0) que.push(i);
    }
    while(!que.empty()){
        int temp = que.front();
        que.pop();
        cout<<temp<<" ";
        for(auto neighbor : adj[temp]){
            if(indegree[neighbor] > 0) indegree[neighbor]--;
            if(indegree[neighbor] == 0) que.push(neighbor); 
        }
    }
}
int main(){
    int v = 5;
    vector<int> adj[v];

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 3, 2);
    add_edge(adj, 3, 4);

    topo_sort(adj, v);
    return 0;
}