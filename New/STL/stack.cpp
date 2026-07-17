// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Stack referce to LIFO > last in first out
    // Stack has some function > push(), pop(), top(), size(), empty(), clear(), swap()
    // stack<char> ch;
    // stack<string> str;
    stack<int> st; // Stack can not be assigned
    stack<int> st2;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    swap(st2, st); // swaping all the elements ( to the first one )
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    return 0;
}