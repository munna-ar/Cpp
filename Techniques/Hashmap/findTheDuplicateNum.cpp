#include<bits/stdc++.h>
using namespace std;

int find_the_duplicate_num(vector<int>arr){
    map<int,int>mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto items: mp){
        int x = items.first;
        int y = items.second;
        if(y>1){
            cout<<x;
            break;
        }
        else{
            cout<<"no duplicates";
            break;
        }
    }
}

int main(){
    find_the_duplicate_num({1,5,2,1,3}); // 1
    return 0;
}