#include<bits/stdc++.h>
using namespace std;
int main(){
    // push_back, push_front, front, back, pop_front, pop_back, insert, erase, remove, reverse, sort
    // unique, swap, merge, size, clear, empty
    list<int>li;
    li.push_back(2); li.push_back(2); li.push_back(6); li.push_back(1); li.push_back(3);
    li.push_front(0);
    list<int>li1;
    li1.push_back(6); li1.push_back(4); li1.push_back(5);
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    li.pop_back();
    li.pop_front();
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    li.merge(li1);
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    cout<<li.size()<<endl;
    cout<<li1.size()<<endl;
    li.remove(6);
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    li.reverse();
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    li.sort();
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    li.unique();
    for(auto item: li){
        cout<<item<<" ";
    }cout<<endl;
    li1.swap(li);
    for(auto item: li1){
        cout<<item<<" ";
    }cout<<endl;
    cout<<li.size();
    return 0;
}