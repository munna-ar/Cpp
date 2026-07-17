#include<bits/stdc++.h>
using namespace std;
int kp(vector<int> weight, vector<int> prices, int w, int n){
    if(w == 0 || n == 0) return 0;
    if(weight[n-1] <= w){
        return max(prices[n-1] + kp(weight, prices, w-weight[n-1], n-1), kp(weight, prices, w, n-1));
    }                       // (8+7, 7+6+5)
    else{
        return kp(weight, prices, w, n-1);
    }
}
int main(){
    cout<<kp({2,3,4,5}, {5,6,7,8}, 9, 4); 
    return 0;
}