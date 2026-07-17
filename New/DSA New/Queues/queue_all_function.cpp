#include<bits/stdc++.h>
using namespace std;
 
int main(){         // all function > size(), push(), pop(), front(), back(), swap(), empty()
    queue<int> que, que2;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    cout<<que.size()<<"\n";
    cout<<que.empty()<<"\n";
    cout<<que.front()<<"\n";
    cout<<que.back()<<"\n";

    swap(que, que2);
    cout<<que2.size();

    return 0;
}
