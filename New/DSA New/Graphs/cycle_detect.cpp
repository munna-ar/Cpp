#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}
bool dfs_recur(vector<int> arr[], vector<bool> &visited, int node, int parent){
    visited[node] = true; // 0 = true, 1 = true; 2 = true; 3 = true
    for(auto neighbor : arr[node]){
        if(!visited[neighbor]){
            if(dfs_recur(arr, visited, neighbor, node)){    //            0 (-1)
                return true;                                //            |
            }                                               //            1  (0)
        }                                                   //          /   \         *
        else if(neighbor != parent){ // parent changes      //    (1) 2------3  (2)
            return true;                                    //         |
        }                                                  //          4  (2)
    }                                                      //          |
    return false;                                          //          5  (4)
}

bool dfs(vector<int> arr[], int size){ // One node and its neighbor becomes next node
    vector<bool> visited(size+1, false);
    for(int i=0; i<size; i++){
        if(!visited[i]){
            dfs_recur(arr, visited, i, -1);
            return true;
        }
    }
}
int main(){
    int v = 6, parent = -1;
    vector<int> adj[v];
    vector<bool> visited(v, false);

    add_edge(adj, 0, 1);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    add_edge(adj, 2, 4);
    add_edge(adj, 2, 5);

    cout<<dfs_recur(adj, visited, 0, parent);
    return 0;
}
