#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void insert_end(Node **head_ref, int value){ // (*head_ref) pointing head node
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    // since head is NULL
    if((*head_ref) == NULL){
        *head_ref = new_node; // new_node becomes head
        new_node->prev = NULL;
        return;
    }
    // when nodes exists
    Node *last = *head_ref;
    while(last->next != NULL ){
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}
void print(Node *head_node){
    cout<<"NULL";
    while(head_node != NULL){                  // until it reaches a NUll node
        cout<<" < "<<head_node->data<<" > ";
        head_node = head_node->next;
    }
    cout<<"NULL";
}
int main(){
    insert_end(&head, 1);
    insert_end(&head, 4);
    insert_end(&head, 5);
    insert_end(&head, 7);

    print(head);
    return 0;
}
