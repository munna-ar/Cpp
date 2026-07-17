#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int find_the_duplicate(vector<int>arr){
        unordered_map<int,int>mp;
        for(int i=0; i<arr.size(); i++) mp[arr[i]]++;
        for(auto items: mp){
            int x = items.first;
            int y = items.second;
            if(y>1){
                cout<<x;
                break;
            }
        }
    }
};
int main(){
    solution hello;
    hello.find_the_duplicate({3,1,2,5,1});
    return 0;
}