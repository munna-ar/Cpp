#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_aueue (known as heap) -> push(), empty(), size(), top(), pop(), swap()
    // default max heap
    priority_queue<int>q;
    q.push(3); q.push(1); q.push(4); q.push(2);
    while(q.size() != 0){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    priority_queue<int, vector<int>, greater<int>>s;
    s.push(3); s.push(1); s.push(4); s.push(2);
    while(s.size() != 0){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}