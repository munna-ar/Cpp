#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool valid_parentheses(string s){
        stack<char> store;
        for(auto i: s){
            if(store.empty()){
                store.push(i);
            }
            else if(store.top()=='(' && i==')' || store.top()=='{' && i=='}' || store.top()=='[' && i== ']'){
                store.pop();
            }
            else{
                store.push(i);
            }
        }
        return (store.empty());
    }
};
int main(){
    Solution a;
    cout<<a.valid_parentheses("({[]})")<<endl;
    cout<<a.valid_parentheses("([]{)");
    return 0;
}