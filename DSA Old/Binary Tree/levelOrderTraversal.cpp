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
vector<int> levelOrder(treeNode *new_root){
    queue<treeNode*>q;
    vector<int>ans;
    q.push(new_root);
    if(root == NULL){
        return ans;
    }
    while(!q.empty()){
        treeNode *temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    for(auto i: ans) cout<<i<<" ";
}
int main(){
    root = new treeNode(1); //                                    1
    root->left = new treeNode(2); //                         2         3
    root->right = new treeNode(3); //                     4               5
    root->left->left = new treeNode(4);
    root->right->right = new treeNode(5);
    levelOrder(root);
    return 0;
}