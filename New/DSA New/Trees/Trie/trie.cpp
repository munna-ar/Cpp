#include<bits/stdc++.h>
using namespace std;

struct trieNode{
    trieNode *child[26];
    bool isEnd;
    trieNode(){
        for(int i=0; i<26; i++){
            child[i] = NULL;
        }
        isEnd = false;
    }
};
int main(){
 
    return 0;
}
