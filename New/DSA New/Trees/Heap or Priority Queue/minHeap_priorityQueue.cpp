#include<bits/stdc++.h>
using namespace std;
 
int main(){
                                                              // int, means types of element
    priority_queue<int, vector<int>, greater<int>> minHeap;  // vector<int>, means types of container
                                                            //  greater<int>, means comparison funtion
    minHeap.push(7);
    minHeap.push(3);
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(1);
    minHeap.push(4);

    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    return 0;
}
