#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int counting_bits(int num){
    vector<int> store(num+1, 0);
    for(int i=1; i<=num; i++){
        store[i] = store[i>>1] + i%2;
    }
    for(int i=0; i<num; i++){
        cout<<store[i]<<" ";
    }
}
};
int main(){
    Solution a;
    a.counting_bits(5);
    return 0;
}