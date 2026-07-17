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
int height(treeNode *new_root){
    if(new_root == NULL){
        return 0;
    }
    else{
        return max(height(new_root->left), height(new_root->right)) + 1;
    }
}
int main(){ //                                                     1
    root = new treeNode(1);   //                               2       5
    root->left = new treeNode(2); //                         3   4       
    root->left->left = new treeNode(3);
    root->left->right = new treeNode(4);
    root->right = new treeNode(5);
    cout<<height(root);
    return 0;
}