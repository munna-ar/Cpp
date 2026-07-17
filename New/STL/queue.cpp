// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Queue referce to FIFO > first in first out
    // Queue has some function > push(), pop(), size(), empty(), swap()
    // queue<char> ch;
    // queue<string> str;
    queue<int> qu; // Queue can not be assigned
    queue<int> qu2;
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.push(6);
    qu.push(7);
    qu.push(8);
    qu.push(9);
    
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    cout<<qu.empty()<<endl;
    // while(!qu.empty()){
    //     cout<<qu.front()<<" ";
    //     qu.pop();
    // }
    // cout<<endl;
    swap(qu2, qu); // swaping all the elements ( to the first one )
    while(!qu2.empty()){
        cout<<qu2.front()<<" ";
        qu2.pop();
    }
    return 0;
}