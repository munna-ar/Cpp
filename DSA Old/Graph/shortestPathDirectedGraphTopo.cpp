#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> vec[], int x, int y, int w){
    vec[x].push_back(make_pair(y, w));
}
vector<int> shortest_path(vector<pair<int,int>> vec[], int v, int s){
    vector<int> value(v, 0), dis(v, INT_MAX), ans;
    queue<int> q;
    q.push(s);
    // indegree function
    for(int i=0; i<v; i++){
        for(auto j: vec[i]){
            value[j.first]++;
        }
    }
    // inserting less (0) indegree's element in q
    for(int i=0; i<v; i++){
        if(value[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push_back(temp);
        for(auto i: vec[temp]){
            if(value[i.first] > 0) value[i.first]--;
            if(value[i.first] == 0) q.push(i.first);
        }
    }
    dis[0] = 0;
    for(int i=0; i<ans.size(); i++){
        for(auto j: vec[ans[i]]){
            dis[j.first] = min(dis[j.first], (dis[ans[i]] + j.second));
        }
    }
    for(int i=0; i<dis.size(); i++){
        cout<<i<<" > "<<dis[i]<<endl;
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

    shortest_path(adj, v, 0);
    return 0;
}