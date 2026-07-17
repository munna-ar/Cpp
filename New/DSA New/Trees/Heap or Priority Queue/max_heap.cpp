#include<bits/stdc++.h>      //  Parent node is greater than or equal to it's children
using namespace std;        //  Largest element is at the root

struct Node{                         //                 20
    int data;                       //              5       10
    Node *left, *right;            //            2    3   7    8
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
int main(){
    Node *root = new Node(20);
    Node *one = new Node(5);
    Node *two = new Node(10);
    Node *three = new Node(2);
    Node *four = new Node(3);
    Node *five = new Node(7);
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