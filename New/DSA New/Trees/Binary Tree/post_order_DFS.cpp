#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
void post_order(Node *root_node){
    if(root_node == NULL){
        return;
    }
    post_order(root_node->left);
    post_order(root_node->right);
    cout<<root_node->data<<" ";
}
int main(){
    Node *root = new Node(1);
    Node *two = new Node(2);              //                     1
    Node *four = new Node(4);             //                 2        4
    Node *five = new Node(5);             //              5    7    3   8
    Node *seven = new Node(7);
    Node *three = new Node(3);
    Node *eight = new Node(8); 

    root->left = two;
    root->right = four;
    two->left = five;
    two->right = seven;
    four->left = three;
    four->right = eight;

    post_order(root);
    return 0;
}
