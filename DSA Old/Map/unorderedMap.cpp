#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int>details;
    details["m"] = 7;
    details["a"] = 1;
    details.insert({"r", 7});
    details.erase("o");
    for(auto items: details) cout<<items.first<<" : "<<items.second<<endl;
    cout<<"\n";
    vector<char>arr{'h','e','l','l','o'};
    unordered_map<char,int>mp;
    for(int i=0; i<arr.size(); i++) mp[arr[i]]++;
    for(auto items: mp) cout<<items.first<<" : "<<items.second<<" , ";
    cout<<"\n";
    unordered_map<int,int>mp2{{1,2},{2,3},{3,4}};
    for(auto items:mp2) cout<<items.first<<" : "<<items.second<<" , ";
    return 0;
}