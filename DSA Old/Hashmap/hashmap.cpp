#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {0,1,2,3,4,0,1,2};
    map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto i: mp){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;
    vector<char> ch = {'a', 'b', 'c', 'd', 'e', 'a', 'd', 'e'};
    map<char, int> mp2;
    for(int i=0; i<ch.size(); i++){
        mp2[ch[i]]++;
    }
    for(auto i: mp2){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}