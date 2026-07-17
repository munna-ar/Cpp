#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int set_bits(int num){ // 1010
        int count = 0;
        while(num != 0){
            count += num%2; // 0,1,0,1
            num >>= 1; // 101, 10, 1, 0
        }
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.set_bits(10);
    return 0;
}