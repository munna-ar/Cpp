#include<bits/stdc++.h>
using namespace std;

int worderful_numbers(int n){

    // checking odd
    if(n % 2 == 0){
        cout<<"No\n";
        return 0;
    }
    // convert to binary
    vector<int> binary;
    while(n){
        int a = n % 2;
        binary.push_back(a);
        n /= 2;
    }
    // checking palindrome
    int l = 0, r = binary.size() - 1; // two pointer technique
    while(l < r){
        if(binary[l] != binary[r]){
            cout<<"No\n";
        }
        l++;
        r--;
    }
    cout<<"Yes\n";
}
int main(){
    worderful_numbers(7);
    return 0;
}
