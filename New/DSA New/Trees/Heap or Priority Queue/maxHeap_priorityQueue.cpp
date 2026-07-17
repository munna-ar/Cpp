#include<bits/stdc++.h>
using namespace std;
 
int main(){

    priority_queue<int, vector<int>> maxHeap;     

    maxHeap.push(7);
    maxHeap.push(3);
    maxHeap.push(5);
    maxHeap.push(2);
    maxHeap.push(1);
    maxHeap.push(4);

    while(!maxHeap.empty()){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    return 0;
}
