#include<bits/stdc++.h>
using namespace std;
class solution {//       slow and fast pointer
    public:
    int sum_of_square(int num){
        int rem, sum = 0;
        while(num != 0){
            rem = num % 10;
            sum += rem*rem;
            num /= 10;
        }
        return sum;
    }
    int is_happy(int num){
        int slow = num;
        int fast = sum_of_square(num);
        if(slow == fast) return true;
        while(slow != fast){
            slow = sum_of_square(slow);
            fast = sum_of_square(sum_of_square(fast));
            if(slow == 1 && fast == 1) return true;
        }
    return false;
    }
};
int main(){
    solution hello;
    hello.sum_of_square(19);
    cout<<hello.is_happy(19);
    return 0;
}