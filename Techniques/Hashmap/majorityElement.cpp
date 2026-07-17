#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majority_element(vector<int> arr){
        int n = arr.size();
        map<int,int> store;
        for(int i=0; i<n; i++){
            store[arr[i]]++;
        }
        n = n/2;
        for(auto i: store){
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