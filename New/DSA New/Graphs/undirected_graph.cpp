#include<bits/stdc++.h>
using namespace std;
                     // vector<int> vec[] means, array of vectors (dynamic)
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y); // two directions
    vec[y].push_back(x);
}
void print(vector<int> arr[], int v){
    for(int i=0; i<v; i++){
        cout<<i<<" -> ";
        for(auto node : arr[i]){
            cout<<node<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int v = 5;
    vector<int> adj[v]; // a dynamic array of vectors and just assigning it to size 4
                        // adj[0] > vector of integers
                        // adj[1] > vector of integers
                        // .......... so on adj[3] > vector of integers
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 3);
    add_edge(adj, 1, 4);
    add_edge(adj, 2, 1);
    add_edge(adj, 2, 4);

    print(adj, v);
    return 0;
}