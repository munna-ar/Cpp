#include<bits/stdc++.h>
using namespace std;

class solution { 
    public:
    int sum_of_digit(int num){
        int rem, sum = 0;
        if(num <= 1) cout<<"false";
        else{
            while(num != 0){
                rem = num % 10;
                sum += rem*rem;
                num /= 10;
            }
            cout<<sum;
        }
    }
};
int main(){
    solution hello;
    hello.sum_of_digit(34);
    return 0;
}