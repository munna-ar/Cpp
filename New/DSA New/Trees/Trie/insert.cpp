#include<bits/stdc++.h>
using namespace std;

struct trieNode{
    trieNode *child[26];      
    bool endWord;             
    trieNode(){                        //      each time it creates a 26 sized of null pointers array
        for(int i=0; i<26; i++){       //       _______________________________________________
            child[i] = NULL;           //      |0|0|0|0|0|............_______________________|0|
        }                             //       0 1 2 3 4.....................................25
        endWord = false;             // assign endWord to false for each new node
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
int main(){
    trieNode *root = new trieNode();     //                        root  (current)
    insert(root, "cat");                //                          |
    return 0;                           //                          |----c (current) (child[2])
}                                    //                                  |
//                                                                       |----a  (current) (child[0])
//                                                                       |----t  (current) (child[19])
//                                                                       |
//                                                                       endWord
