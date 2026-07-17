#include<bits/stdc++.h>
using namespace std;

struct tree_Node{
    int data;
    tree_Node *left;
    tree_Node *right;
    tree_Node(int value){
        data = value;
        left = right = NULL;
    }
};
int main(){          // Trees mean Binary Tree
    tree_Node *root = new tree_Node(1);
    tree_Node *four = new tree_Node(4);
    tree_Node *five = new tree_Node(5);
    tree_Node *seven = new tree_Node(7);
    tree_Node *eight = new tree_Node(8);

    root->left = four;             //                     1
    root->right = five;           //                 4         5 
    four->left = seven;          //                7   N    N    8
    five->right = eight;

    cout<<"        "<<root->data<<"\n";
    cout<<"    "<<root->left->data<<"       "<<root->right->data<<"\n";
    cout<<" "<<four->left->data<<" "<<"             "<<five->right->data;
    return 0;
}
