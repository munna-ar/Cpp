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
treeNode *root1 = NULL;
vector<int>store;
void inorder(treeNode *new_root, vector<int>&v){
    if(new_root != NULL){
        inorder(new_root->left, v);
        v.push_back(new_root->data);
        inorder(new_root->right, v);
    }
}
int main(){
    root1 = new treeNode(1);
    root1->left = new treeNode(2);
    root1->right = new treeNode(3);
    inorder(root1, store);
    for(auto i: store) cout<<i<<" ";
    return 0;
}