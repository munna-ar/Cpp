#include<bits/stdc++.h>
using namespace std;
 
struct Node{                    // Binary Search Tree (BST)
    int data;                  //  right nodes value is greater than left and main nodes value
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *minimum(Node *root_node){
    while(root_node != NULL && root_node->left != NULL){
        root_node = root_node->left;
    }
    return root_node;
}
int main(){
    Node *root = new Node(6);
    Node *one = new Node(5);              //                     6
    Node *two = new Node(9);             //                 5        9
    Node *three = new Node(3);             //            3   7     8   10   
    Node *four = new Node(7);
    Node *five = new Node(8);
    Node *six = new Node(10); 

    root->left = one;
    root->right = two;
    one->left = three;
    one->right = four;
    two->left = five;
    two->right = six;

    cout<<minimum(root)->data;
    return 0;
}
