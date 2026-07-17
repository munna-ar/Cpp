#include<bits/stdc++.h>
using namespace std;
struct treeNode{
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int value){
        data = value;
        left = right = NULL;
    }
};
treeNode *root = NULL;
void inOrder(treeNode *new_root){
    if(new_root == NULL){
        return;
    }
    inOrder(new_root->left);
    cout<<new_root->data<<" ";
    inOrder(new_root->right);
}
int main(){
    root = new treeNode(1); //                                    1
    root->left = new treeNode(2); //                         2         3
    root->right = new treeNode(3); //                     4               5
    root->left->left = new treeNode(4);
    root->right->right = new treeNode(5);
    inOrder(root);
    return 0;
}