// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Map has some function > size(), empty(), swap(), clear(), count(), erase()
    // map<string,string> mp;
    // map<char,char> mp;
    // map<int,int> mp;
    map<string,int> mp; // map has ascending order
    mp["A"] = 3;
    mp["B"] = 4;
    mp["C"] = 5;
    mp["D"] = 6;
    mp["E"] = 7;

    cout<<mp.size()<<endl;
    cout<<mp.empty()<<endl;
    cout<<mp.count("C")<<endl;

    mp.erase("D");
    cout<<mp.size()<<endl;

    for(auto i: mp){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}