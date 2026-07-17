#include<bits/stdc++.h>
using namespace std;
struct treeNode{
    int data;
    treeNode *left, *right;
    treeNode(int value){
        data = value;
        left = right = NULL;
    }
};
treeNode *root = NULL;
void invert(treeNode *new_root){
    queue<treeNode*>q;
    q.push(new_root);
    if(new_root == NULL){
        return;
    }
    while(!q.empty()){
        treeNode *temp = q.front();
        q.pop();
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
        swap(temp->left, temp->right);
    }
}
void inorder(treeNode *new_root){
    if(new_root != NULL){
        inorder(new_root->left);
        cout<<new_root->data<<" ";
        inorder(new_root->right);
    }
}
int main(){ //                                     1          |         1
    root = new treeNode(1); //                2         3     |     3        2
    root->left = new treeNode(2); //        4   5     6   7   |  7   6     5   4     
    root->right = new treeNode(3); //                         |            
    root->left->left = new treeNode(4); //                     
    root->left->right = new treeNode(5); //                     
    root->right->left = new treeNode(6); //                     
    root->right->right = new treeNode(7); //                   
    inorder(root);
    invert(root);
    inorder(root);
    return 0;
}