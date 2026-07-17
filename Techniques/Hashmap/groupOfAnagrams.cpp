#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>str {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>>result;
    string keyword;
    map<string, vector<string>>mp;
    for(auto item: str){
        keyword = item;
        sort(keyword.begin(), keyword.end());
        mp[keyword].push_back(item);
    }
    for(auto item: mp){
        result.push_back(item.second);
    }
    for(auto item = result.begin(); item != result.end(); item++){
        cout<<*item->data()<<" ";
    }
    return 0;
}