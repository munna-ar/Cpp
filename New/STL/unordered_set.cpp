// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Unordered_set has some function > insert(), size(), clear(), count(), erase(), empty()
    // unordered_set<string> st;
    // unordered_set<char> st;
    unordered_set<int> st; // unordered_set descending order
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(5); // unordered_set ignores duplicate element

    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.count(3)<<endl;

    for(auto i: st){
        cout<<i<<" ";
    }
    return 0;
}