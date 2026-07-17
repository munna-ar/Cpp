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
bool bst(Node *search_node, int key){
    if(search_node == NULL){
        return false;
    }
    if(search_node->data == key){
        return true;
    }
    else if(search_node->data > key){         // if a nodes value is less than key
        return bst(search_node->left, key);  // then node changes to a higher value containing node
    }
    else{
        return bst(search_node->right, key);  // if a nodes value is greater than key
    }                                       // then node changes to lower value containing node 
}
int main(){
    Node *root = new Node(6);
    Node *one = new Node(4);              //                     6
    Node *two = new Node(9);             //                 4        9
    Node *three = new Node(3);             //            2    5    8   10   
    Node *four = new Node(5);
    Node *five = new Node(8);
    Node *six = new Node(10); 

    root->left = one;
    root->right = two;
    one->left = three;
    one->right = four;
    two->left = five;
    two->right = six;

    cout<<bst(root, 5);
    return 0;
}
