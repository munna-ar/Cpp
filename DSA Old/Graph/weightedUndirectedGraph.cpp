#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
    vec[y].push_back(make_pair(x, w));
}
void print(vector<pair<int,int>> vec[], int v, int s){
    for(int i=0; i<v; i++){
        cout<<i<<" > "<<endl;
        for(auto j : vec[i]){
            cout<<j.first<<" "<<j.second<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int v = 3;
    vector<pair<int,int>> adj[v];
    add_edge(adj, 0, 1, 3);
    add_edge(adj, 0, 2, 1);
    add_edge(adj, 1, 2, 4);
    print(adj, 3, 0);
    return 0;
}