#include<bits/stdc++.h>
using namespace std;
 
void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
}
void shortest_path_using_topo_DAG(vector<pair<int,int>> adj[], int v){
    vector<int> indegree(v+1, 0), dis(v, INT_MAX), store;
    queue<int> que;

    // indegree except the source
    for(int i=0; i<v; i++){
        for(auto node : adj[i]){
            indegree[node.first]++;
        }
    }
    for(int i=0; i<v; i++){
        if(indegree[i] == 0){
            que.push(i);
        }
    }
    while(!que.empty()){
        int temp = que.front();
        que.pop();
        store.push_back(temp);
        for(auto node : adj[temp]){
            if(indegree[node.first] > 0) indegree[node.first]--;
            if(indegree[node.first] == 0){
                que.push(node.first);
            }
        }
    }

    dis[0] = 0;
    for(int i=0; i<store.size(); i++){
        for(auto node : adj[store[i]]){
            if(dis[node.first] > ((dis[store[i]] + node.second))){ // dis[store[i]] = previous distance
                dis[node.first] = dis[store[i]] + node.second;     // of current source
            }
        }
    }
    cout<<"From source 0"<<"\n";

    for(int i=0; i<dis.size(); i++){
        cout<<i<<" -> path "<<dis[i]<<"\n";
    }
}
int main(){
    int v = 6;
    vector<pair<int,int>> adj[v];

    add_edge(adj, 0, 1, 2);
    add_edge(adj, 0, 4, 1);
    add_edge(adj, 1, 2, 3);
    add_edge(adj, 2, 3, 6);
    add_edge(adj, 4, 2, 2);
    add_edge(adj, 4, 5, 4);
    add_edge(adj, 5, 3, 1);

    shortest_path_using_topo_DAG(adj, v);

    return 0;
}
