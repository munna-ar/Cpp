// In the name of Allah
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Set has some function > size(), empty(), count(), erase(), clear()
    //set<string> st;
    //set<char> st;
    set<int> st; // Set has ascending order ( lower to upper )
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(5); // ignores duplicate element
    
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.count(5)<<endl;
    

    for(auto i: st){
        cout<<i<<" ";
    }
    return 0;
}