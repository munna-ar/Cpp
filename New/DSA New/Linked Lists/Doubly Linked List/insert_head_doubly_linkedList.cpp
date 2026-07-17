#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

void insert_head(Node **head_ref, int value){  // (*head_ref) pointing the head node
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    // since two node exists as well as head
    if((*head_ref) != NULL){
        (*head_ref)->prev = new_node; // new_node becomes head
    }
    // when head is NULL
    (*head_ref) = new_node;
}
void print(Node *head_node){
    cout<<"NULL ";
    while(head_node != NULL){             // until it reaches a NULL node
        cout<<" < "<<head_node->data<<" > ";
        head_node = head_node->next;
    }
    cout<<" NULL";
}
int main(){
    Node *head = NULL;
    insert_head(&head, 1);
    insert_head(&head, 4);
    insert_head(&head, 5);
    insert_head(&head, 7);

    print(head);
    return 0;
}
