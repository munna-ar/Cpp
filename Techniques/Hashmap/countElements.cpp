#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr {1,5,7,1,7,7};
    map<int,int>mp;
    for(auto item: arr){
        mp[item]++;
    }
    for(auto item: mp){
        cout<<item.first<<" : "<<item.second<<endl;
    }
    
    return 0;
}