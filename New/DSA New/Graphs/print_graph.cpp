#include<bits/stdc++.h>
using namespace std;
                     // vector<int> vec[] means, array of vectors (dynamic)
void add_edge(vector<int> vec[], int x, int y){
    vec[x].push_back(y);
    vec[y].push_back(x);
}

void print(vector<int> arr[], int n){
    for(int i=0; i<n; i++){
        cout<<i<<" > ";
        for(auto i : arr[i]){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n = 4;
    vector<int> adj[n]; // a dynamic array of vectors and just assigning it to size 4
                        // adj[0] > vector of integers
                        // adj[1] > vector of integers
                        // .......... so on adj[3] > vector of integers
    add_edge(adj, 1, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 0);
    add_edge(adj, 1, 3);
    add_edge(adj, 3, 2);
    add_edge(adj, 2, 0);

    print(adj, n);
    return 0;
}
