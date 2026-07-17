#include<bits/stdc++.h>      //  Parent node is smaller than or equal to it's children
using namespace std;        //  Smaller element is at the root

struct Node{                         //                 2
    int data;                       //              3       6
    Node *left, *right;            //             4   5   9   8
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
int main(){
    Node *root = new Node(2);
    Node *one = new Node(3);
    Node *two = new Node(6);
    Node *three = new Node(4);
    Node *four = new Node(5);
    Node *five = new Node(9);
    Node *six = new Node(8);

    root->left = one;
    root->right = two;
    one->left = three;
    one->right = four;
    two->left = five;
    two->right = six;

    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<"\n";
    cout<<one->data<<" "<<one->left->data<<" "<<one->right->data<<"\n";
    cout<<two->data<<" "<<two->left->data<<" "<<two->right->data;
    return 0;
}