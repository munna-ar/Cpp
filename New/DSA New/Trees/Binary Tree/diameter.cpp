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

int dia = 0;
int height(Node *root_node){         //               1
    if(root_node == NULL){          //             4     5 
        return 0;                   //          2      3   7
    }
    int left_dm = height(root_node->left);
    int right_dm = height(root_node->right);
    dia = max(dia, 1 + left_dm + right_dm);

    return 1 + max(left_dm, right_dm);
}
int diameter(Node *root_node){
    height(root_node);
    return dia - 1;                // paths
}
int main(){
    Node *head = new Node(1);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->left = four;
    head->right = five;
    five->left = three;
    five->right = seven;

    cout<<diameter(head);
    return 0;
}
