#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minimum_sum_of_four_digits(int num){
        vector<int> store;
        while(num > 0){
            store.push_back(num % 10);
            num /= 10;
        }
        sort(store.begin(), store.end());

        return (store[0] + store[1])*10 + (store[2] + store[3]);
    }
};
int main(){
    Solution a;
    cout<<a.minimum_sum_of_four_digits(2932);
    return 0;
}