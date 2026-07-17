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
Node *head = NULL;
void insert_head(int value){
    Node *new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node *temp = head; // temporary node temp
    head = new_node; // swaping head with new node
    new_node->next = temp; // replacing previous head at second position
}
void print(){
    while(head != NULL){
        cout<<head->data<<" > ";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    insert_head(1);
    insert_head(4);
    insert_head(5);
    insert_head(7);
    insert_head(0);
    print();
    return 0;
}
