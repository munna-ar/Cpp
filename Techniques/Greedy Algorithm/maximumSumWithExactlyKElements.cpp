#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximum_sum_with_k_elements(vector<int> arr, int k){
        int n = 0, sum = 0;
        for(auto i: arr){ // iterating through the arr array
            if(i>n) n = i;
        }
        for(int i=0; i<k; i++){
            sum += n;
            n++;
        }
        return sum;
    }
};
int main(){
    Solution a;
    cout<<a.maximum_sum_with_k_elements({5,5,5}, 2);
    return 0;
}