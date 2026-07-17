#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
void display(vector<int> vec[], int v){
    for(int i=0; i<v; i++){
        cout<<i<<" > ";
        for(auto j: vec[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v = 4;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    display(adj, v);
    return 0;
}