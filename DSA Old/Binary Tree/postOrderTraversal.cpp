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
void postOrder(treeNode *new_root){
    if(new_root == NULL){
        return;
    }
    postOrder(new_root->left);
    postOrder(new_root->right);
    cout<<new_root->data<<" ";
}
int main(){
    root = new treeNode(1); //                                    1
    root->left = new treeNode(2); //                         2         3
    root->right = new treeNode(3); //                     4               5
    root->left->left = new treeNode(4);
    root->right->right = new treeNode(5);
    postOrder(root);
    return 0;
}