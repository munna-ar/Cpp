#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,3,4,5};
    priority_queue<pair<int,int>>heap;
    for(int i=0; i<arr.size(); i++){
        heap.push({arr[i],i});
    }
    while(!heap.empty()){
        cout<<heap.top().first<<":"<<heap.top().second<<endl;
        heap.pop();
    }
    return 0;
}