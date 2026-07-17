#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int can_place_flowers(vector<int> arr, int n){
        if(n == 0) return true;
        int s = arr.size();
        for(int i=0; i<s; i++){
            if(arr[i] == 0 && (i == 0 || arr[i-1] == 0) && (i==(s-1) || arr[i+1] == 0)){
                arr[i] = 1;
                n--;
            }
            if(n == 0) return true;
        }
        return false;
    }
};
int main(){
    Solution a;
    cout<<a.can_place_flowers({0,0,0}, 2);
    return 0;
}