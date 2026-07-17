#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int size, store;
    cout<<"enter size of the vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>store;
        arr.push_back(store);
    }
    for(auto i = arr.begin(); i!=arr.end(); i++){
        cout<<*i<<" ";
    }
    return 0;
}