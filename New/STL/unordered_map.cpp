// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // unordered_map<string, string> mp;
    // unordered_map<char,char> mp;
    // unorderd_map<int,int> mp;
    unordered_map<string,int> mp; // unordered_map has some function > size(), count(), 
    mp["A"] = 2;
    mp["B"] = 3;
    mp["C"] = 4;
    mp["D"] = 5;
    mp["E"] = 6; // unordered_map has descending order
    
    
    cout<<mp.size()<<endl;
    cout<<mp.count("A")<<endl;
    cout<<mp.empty()<<endl;

    for(auto i: mp){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}