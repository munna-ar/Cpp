#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int hamming_distance(int x, int y){
        int z = x^y, count = 0;
        while(z){
            if(z&1) count++;
            z = z>>1;
        }
        return count;
    }
};
int main(){
    Solution a;
    cout<<a.hamming_distance(4,2);
    return 0;
}