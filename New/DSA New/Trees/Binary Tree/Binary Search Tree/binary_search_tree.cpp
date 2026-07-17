#include<bits/stdc++.h>
using namespace std;
 
struct Node{           // Binary Search Tree (BST)
    int data;         //  right nodes value is greater than left and main nodes value
    Node *left;      // It has five function > insert, search, fine minimum, maximum, delete
    Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main(){
    Node *root = new Node(80);
    Node *one = new Node(50);              //                     80
    Node *two = new Node(90);             //                 50        90
    Node *three = new Node(30);             //            30   60   85   100   
    Node *four = new Node(60);
    Node *five = new Node(85);
    Node *six = new Node(100); 

    root->left = one;
    root->right = two;
    one->left = three;
    one->right = four;
    two->left = five;
    two->right = six;
    
    return 0;
}
