#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y,w));
}
void dijkstra_algo(vector<pair<int,int>> arr[], int start, int v){
    vector<int> dis(v, INT_MAX);
    vector<bool> visited(v+1, false);
    dis[start] = 0;
    for(int i=0; i<v; i++){
        int temp = -1;
        if(!visited[i] && (temp == -1 || (dis[start] < dis[temp]))){
            temp = i;
        }
        visited[temp] = true;
        for(auto neighbor : arr[temp]){
            if(!visited[neighbor.first] && neighbor.second != 0){
                dis[neighbor.first] = min(dis[neighbor.first], (dis[temp] + neighbor.second));
            }
        }
    }
    cout<<"From source "<<start<<"\n";
    for(int i=0; i<v; i++){
        cout<<i<<" -> distance = "<<dis[i]<<"\n";
    }
}
int main(){
    int v = 4;
    vector<pair<int,int>> adj[v];

    add_edge(adj, 0, 1, 50);
    add_edge(adj, 0, 2, 100);
    add_edge(adj, 1, 2, 30);
    add_edge(adj, 1, 3, 200);
    add_edge(adj, 2, 3, 20);

    dijkstra_algo(adj, 0, v);
    return 0;
}
