#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> v;
    v.push_back(make_pair(0,1));
    v.push_back(make_pair(0,2));
    v.push_back(make_pair(1,2));
    for(auto i: v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}