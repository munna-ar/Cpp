#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        next = prev = NULL;
    }
};
Node *head = NULL;

void delete_head(Node **head_ref){
    if((*head_ref) == NULL){          // (*head_ref) is head node
        return;
    }
    Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;   // (*head_ref) is head node and now points the second node as head

    if((*head_ref) != NULL){        // after second node became as head node
        (*head_ref)->prev = NULL;
    }
    delete temp;
}
void print(Node *head_node){
    cout<<"NULL";
    while(head_node != NULL){                 // until it reaches a NULL node
        cout<<" < "<<head_node->data<<" > ";
        head_node = head_node->next;
    }
    cout<<"NULL";
}
int main(){
    Node *head = new Node(0);
    Node *one = new Node(1);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->next = one;
    one->prev = head;
    one->next = four;
    four->prev = one;
    four->next = five;
    five->prev = four;
    five->next = seven;
    seven->prev = five;
    
    delete_head(&head);
    print(head);
    return 0;
}
