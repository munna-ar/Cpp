#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    vector<int> adj[n]; // a dynamic array of vectors and just assigning it to size 4
                        // adj[0] > array of vectors
                        // adj[1] > array of vectors and so on til adj[3]
    
    adj[0].push_back(1);              //     0 > 1, 2, 3
    adj[0].push_back(2);             //      1 > 0, 2, 3
    adj[1].push_back(3);             //      2 > 0, 1, 3
    adj[1].push_back(2);             //      3 > 1, 0, 2
    adj[3].push_back(0);
    adj[2].push_back(3);

    return 0;
}