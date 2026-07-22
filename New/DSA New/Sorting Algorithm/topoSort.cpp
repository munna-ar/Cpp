#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
}
vector<int> topo_sort(vector<int> vec[], int v){
    vector<int> value(v, 0);
    queue<int> q;
    for(int i=0; i<v; i++){
        for(auto j: vec[i]){
            value[j]++;
        }
    }
    for(int i=0; i<v; i++){
        if(value[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto i: vec[temp]){
            if(value[i] > 0) value[i]--;
            if(value[i] == 0) q.push(i);
        }
    }
}
int main(){
    int v=4;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 2);
    topo_sort(adj, v);
    return 0;
}