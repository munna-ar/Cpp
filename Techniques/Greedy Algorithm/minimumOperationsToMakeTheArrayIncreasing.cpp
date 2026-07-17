#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minimum_operations(vector<int> arr){
        int count = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] <= arr[i-1]){
                int change = arr[i-1] - arr[i] + 1;
                count += change;
                arr[i] += change;
            }
        }
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.minimum_operations({1,1,1});
    return 0;
}