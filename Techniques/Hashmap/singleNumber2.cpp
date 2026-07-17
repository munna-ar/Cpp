#include<bits/stdc++.h>
using namespace std;

int singleNumber2(vector<int>arr){
    if(arr.size() <= 1 ){
        return 1;
    }
    map<int, int>mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto item: mp){
        int x = item.first;
        int y = item.second;
        if(y==1){
            return x;
        }
    }
}

int main(){
    cout<<singleNumber2({2,2,3,2});
    return 0;
}