#include<bits/stdc++.h>
using namespace std;
 
int main(){       // all functions > size(), empty(), push(), empty(), pop(), top(), swap()
    stack<int> st, st2;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(10);

    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
    cout<<st.top()<<"\n";

    swap(st, st2);
    cout<<st2.size()<<"\n";
    return 0;
}
