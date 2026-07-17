#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int intersection_of_two_arrays2(vector<int> arr, vector<int> arr2){
        sort(arr.begin(), arr.end());
        sort(arr2.begin(), arr2.end());
        vector<int> store;
        int i=0, j=0;
        while(i<arr.size() && j<arr2.size()){
            if(arr[i] < arr2[j]) i++;
            else if(arr[i] > arr2[j]) j++;
            else{
                store.push_back(arr[i]);
                i++;
                j++;
            }
        }
        for(auto i: store) cout<<i<<" ";
    }
};
int main(){
    Solution a;
    a.intersection_of_two_arrays2({3,5,2,1}, {1,4,5,2});
    return 0;
}