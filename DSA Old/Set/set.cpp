#include<bits/stdc++.h>
using namespace std;
int main(){ // set properties > insert(), size(), begin(), end(), erase(), find(), count(),
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    for(auto i: st) cout<<i<<" ";
    return 0;
}