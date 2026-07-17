#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

vector<int> level_order(Node *root_node){
    queue<Node*> que;             // Node type queue to store node as element
    vector<int> store;           // to store nodes data
    que.push(root_node);
    if(root_node == NULL){
        return store;
    }
    while(!que.empty()){         // until que is empty, we are inserting a node and
        Node *temp = que.front(); // temp containing that node for temporary then
        que.pop();                // we are deleting that que
        store.push_back(temp->data);
        if(temp->left != NULL){
            que.push(temp->left);
        }
        if(temp->right != NULL){
            que.push(temp->right);
        }
    }
    for(auto i : store) cout<<i<<" ";
}
int main(){
    Node *root = new Node(1);
    Node *two = new Node(2);              //                     1
    Node *four = new Node(4);             //                 2        4
    Node *five = new Node(5);             //              5    7    3   8
    Node *seven = new Node(7);
    Node *three = new Node(3);
    Node *eight = new Node(8); 

    root->left = two;
    root->right = four;
    two->left = five;
    two->right = seven;
    four->left = three;
    four->right = eight;

    level_order(root);
    return 0;
}
