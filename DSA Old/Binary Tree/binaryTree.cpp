#include<bits/stdc++.h>
using namespace std;
struct treeNode{
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
int main(){
    treeNode* root = new treeNode(1);  //                          1
    root -> left = new treeNode(5);       //                     5   7
    root -> right = new treeNode(7);
    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
    return 0;
}