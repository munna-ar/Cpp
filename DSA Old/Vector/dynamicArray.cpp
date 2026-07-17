#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec(2); // dynamic array of integers, we can't insert integer at any specific index
    cout<<vec.size()<<endl;

    vec.push_back(1);
    vec.push_back(2);
    
    cout<<vec.size();
    return 0;
}