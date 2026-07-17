#include<bits/stdc++.h>
using namespace std;
int main(){
    // insert, begin, end, max_size, erase, count, find, upper_bound, lower_bound, [], =
    map<int,int>mp;
    mp.insert({1,5});
    mp[3] = 7;
    mp[2] = 0;
    cout<<mp[2]<<endl;
    for(auto item: mp){
        cout<<item.first<<" "<<item.second<<endl;
    }
    cout<<mp.count(1)<<endl;
    map<int,string>ins;
    ins[1] = "Munna";
    ins[2] = "Arju";
    for(auto item: ins){
        cout<<item.first<<" "<<item.second<<endl;
    }cout<<endl;
    mp.erase(2);
    for(auto item:mp){
        cout<<item.first<<" "<<item.second<<endl;
    }cout<<endl;
    auto find = mp.find(1);
    if(find != mp.end()) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    auto find1 = mp.find(2);
    if(find1 != mp.end()) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    map<int, int>mp1;
    mp1.swap(mp);
    for(auto item: mp1){
        cout<<item.first<<" "<<item.second<<endl;
    }
    return 0;
}