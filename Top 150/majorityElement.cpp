#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majority_element(vector<int> arr){
        int n = arr.size() / 2;
        map<int,int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto i: mp){
            if(i.second > n){
                return i.first;
            }
        }
        return 0;
    }
};
int main(){
    Solution a;
    cout<<a.majority_element({2,3,2});
    return 0;
}