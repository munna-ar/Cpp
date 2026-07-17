#include<bits/stdc++.h>
using namespace std;

struct trieNode{
    trieNode *child[26];
    bool endWord;
    trieNode(){
        for(int i=0; i<26; i++){
            child[i] = NULL;
        }
        endWord = false;
    }
};
void insert(trieNode *root, string word){
    trieNode *current = root; // current is used to travers the trie
    for(auto ch : word){
        int index = ch - 'a';
        if(current->child[index] == NULL){ // checks whether a node for that current character already exist
            current->child[index] = new trieNode(); // inserting the character at child[index]
                                                   // and creates a 26 sized null pointers array
        }
        // move to the next node(character)
        current = current->child[index]; // current moves like, root -> c -> a -> t
    }
    
    current->endWord = true; // when all the characters of a word completely inserted
                            //  then assign endWord to true for the last current root
}

bool search(trieNode *root, string word){
    trieNode *current = root;
    for(auto ch : word){
        int index = ch - 'a';
        if(current->child[index] == NULL){  // if the character doesn't exist
            return false;
        }
        // move to the next node (character)
        current = current->child[index]; // current moves like,  root -> c -> a -> t
    }
    // insert() function assigns the endWord value, if word found then endWord = true, or false otherwise
    return current->endWord; // return the ultimate endWord value
}
int main(){
    trieNode *root = new trieNode();
    insert(root, "cat");
    insert(root, "ant");
    insert(root, "gap");

    cout<<search(root, "gap")<<"\n";
    cout<<search(root, "cap");
    return 0;
}
