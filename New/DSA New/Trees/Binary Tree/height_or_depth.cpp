#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

int height(Node *root_node){              //                      1
    if(root_node == NULL){                //                   4     5 
        return 0;                         //                9      3   7
    }                                    //                              6
    int l = height(root_node->left);    // 1
    int r = height(root_node->right);  //  3
    return max(l, r) + 1;
}
int main(){
    Node *root = new Node(1);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);
    Node *six = new Node(6);
    Node *nine = new Node(9);

    root->left = four;
    root->right = five;
    four->left = nine;
    five->left = three;
    five->right = seven;
    seven->right = six;

    cout<<height(root);
    return 0;
}
