#include<bits/stdc++.h>
using namespace std;         // Symmetric tree is a tree if you mirror it then it'll just match 100%
                             //                                      1
struct Node{                 //                                 2    |    2
    int data;               //                                3   4  |  4   3
    Node *left, *right;     //                                       |
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

bool match(Node *root, Node *subroot){
    if(root == NULL && subroot == NULL){
        return true;
    }
    else if(root != NULL && subroot != NULL){
        // Traversing the nodes
        bool a = match(root->left, subroot->right); // match(3,3), left of first 2 vs right of second 2
                                                   // returns a = 1, because node(3) points to a null node
                                                   // match(3,3) > match(null,null) and returns a = 1
        bool b = match(root->right, subroot->left); // match(4,4), right of first 2 vs left of second 2
                                                   // returns b = 1, because node(4) points to a null node
                                                   // match(4,4) > match(null,null) and returns b = 1
        if(root->data == subroot->data && a && b){ // (2 == 2 && 1 && 1)
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
bool symmetric(Node *root){
    if(root == NULL){
        return true;
    }
    return match(root->left, root->right);
}
int main(){
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    

    cout<<symmetric(root);
    return 0;
}
