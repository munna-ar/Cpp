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

Node *insert(Node *root_node, int value){
    if(root_node == NULL){
        return new Node(value);
    }
    if(root_node->data > value){
        root_node->left = insert(root_node->left, value);
    }
    if(root_node->data < value){
        root_node->right = insert(root_node->right, value);
    }
    return root_node;
}
void pre_order(Node *root_node){
    if(root_node == NULL){
        return;
    }
    cout<<root_node->data<<" ";
    pre_order(root_node->left);
    pre_order(root_node->right);
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

    insert(root, 11);
    insert(root, 2);
    pre_order(root);
    return 0;
}
