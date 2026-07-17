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
treeNode *root2 = NULL;
vector<int>inx, iny, prex, prey;

void inorder(treeNode *new_root, vector<int> &v){
    if(new_root != NULL){
        inorder(new_root->left, v);
        v.push_back(new_root->data);
        inorder(new_root->right, v);
    }
}
void preorder(treeNode *new_root, vector<int> &v){
    if(new_root != NULL){
        v.push_back(new_root->data);
        preorder(new_root->left, v);
        preorder(new_root->right, v);
    }
}
bool same(treeNode *tree1, treeNode *tree2){
    inorder(tree1, inx);
    inorder(tree2, iny);
    preorder(tree1, prex);
    preorder(tree2, prey);
    if(inx == iny && prex == prey){
        cout<<"same tree";
    }
    else cout<<"not same tree";
}
int main(){
    root1 = new treeNode(1);
    root1->left = new treeNode(2);
    root1->right = new treeNode(3);
    root2 = new treeNode(1);
    root2->left = new treeNode(2);
    root2->right = new treeNode(3);
    inorder(root1, inx);
    preorder(root1, prex);
    inorder(root2, iny);
    preorder(root2, prey);
    same(root1, root2);
    return 0;
}