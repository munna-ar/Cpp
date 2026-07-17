#include<bits/stdc++.h>
using namespace std;

bool validParentheses(string paren){
    stack<char> store;
    for(int i=0; i<paren.length(); i++){
        if(store.empty()){
            store.push(paren[i]);
        }
        else if((store.top() == '(' && paren[i] == ')') || (store.top() == '{' && paren[i] == '}') ||
        (store.top() == '[' && paren[i] == ']')){
            store.pop();
        }
        else{
            store.push(paren[i]);
        }
    }
    if(store.empty()){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"not valid";
    }
}
int main(){
    validParentheses("({()})");
    validParentheses("([)");

    return 0;
}