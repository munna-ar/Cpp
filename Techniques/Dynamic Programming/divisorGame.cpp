#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool divisor_game(int num){
        if(num <= 1) return false;
        else if(num%2 == 0) return true;
        return false;
    }
};
int main(){
    Solution a;
    cout<<a.divisor_game(4);
    return 0;
}