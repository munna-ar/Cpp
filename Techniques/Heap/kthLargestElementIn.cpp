#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kth_largest_element(vector<int> arr, int k){
        priority_queue<int> pq(arr.begin(), arr.end());
        for(int i=0; i<k-1; i++){
            pq.pop();
        }
        return pq.top();
    }
};
int main(){
    Solution a;
    cout<<a.kth_largest_element({3,2,1,4,5,6}, 2); // {6,5,4,3,2,1}
    return 0;
}