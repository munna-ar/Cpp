#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,3,0,4,5};
    sort(arr.begin(), arr.end(), greater<>());
    for(int i: arr) cout<< i<<" ";
    return 0;
}