#include<bits/stdc++.h>
using namespace std;
class solution { //  dynamic programming
    public:
    int climbing_stairs(int num){
        if(num == 0 || num == 1) return num;
        int first = 1, second = 1, next;
        for(int i=2; i<=num; i++){
            next = first + second; // 2,3,5
            first = second; // 1,2,3,
            second = next; // 2,3,5
        }
        return second;
    }
};
int main(){
    solution hello;
    cout<<hello.climbing_stairs(4);
    return 0;
}