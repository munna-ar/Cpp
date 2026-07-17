#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void pre_order_traversal(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

int main(){
    Node *head = new Node(1);
    Node *two = new Node(2);              //                     1
    Node *four = new Node(4);             //                 2        4
    Node *five = new Node(5);             //              5    7    3   8
    Node *seven = new Node(7);
    Node *three = new Node(3);
    Node *eight = new Node(8); 

    head->left = two;
    head->right = four;
    two->left = five;
    two->right = seven;
    four->left = three;
    four->right = eight;
 
    pre_order_traversal(head);

    return 0;
}