#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int remove_duplicate(vector<int> arr){
        int k=2;
        for(auto i: arr){
            if(arr[k-2] != i){
                arr[k] = i;
                k++;
            }
        }
        return k;
    }
};
int main(){
    Solution a;
    cout<<a.remove_duplicate({1,1,1,2,2,3});
    return 0;
}