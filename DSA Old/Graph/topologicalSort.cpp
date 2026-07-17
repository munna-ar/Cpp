#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
void indegree(vector<int> vec[], int v){
    vector<int> store(v, 0);
    queue<int> q;
    // indegree
    for(int i=0; i<v; i++){
        for(auto x: vec[i]){
            store[x]++;
        }
    }
    // pushing less indegree's ( 0 indegrees ) element to q
    for(int i=0; i<v; i++){
        if(store[i] == 0)
        q.push(i);
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto i: vec[temp]){
            if(store[i] > 0) store[i]--;
            if(store[i] == 0) q.push(i);
        }
    }
}
int main(){
    int v = 4; // vertex
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 3, 2);
    indegree(adj, v);
    return 0;
}