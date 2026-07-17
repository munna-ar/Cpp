#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node *head = new Node(1);

void print(Node *head_node){
    while(head_node != NULL){
        cout<<head_node->data<<" -> ";
        head_node = head_node->next;
    }
    cout<<"NULL";
}
int main(){
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->next = five;
    five->next = seven;
    seven->next = NULL; // 7 pointing a NULL node
    
    print(head);
    return 0;
}
