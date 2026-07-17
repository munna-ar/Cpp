#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string sort_character(string s){
        map<char,int>mp;
        priority_queue<pair<int,char>>heap;
        string ans;
        for(auto i: s) mp[i]++;
        for(auto i: mp) heap.push({i.second, i.first});
        while(!heap.empty()){
            ans += string(heap.top().first, heap.top().second);
            heap.pop();
        }
        cout<<ans;
    }
};
int main(){
    Solution a;
    a.sort_character("tree");
    return 0;
}