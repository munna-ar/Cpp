#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<vector<int>>heap; // vector type works for storing multiple values in a row
    heap.push({1,2,3});
    heap.push({7,8,9});
    heap.push({5,6,7});
    while(!heap.empty()){
        vector<int> top = heap.top();
        heap.pop();
        cout<<top[0]<<top[1]<<top[2]<<" ";
    }
    return 0;
}