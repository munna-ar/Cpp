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

void delete_end(Node **head_ref){
    if((*head_ref) == NULL){
        return;
    }
    // if one node exists
    if((*head_ref)->next == NULL){
        delete *head_ref;
        *head_ref = NULL;
        return;
    }
    // when 2 nodes or more
    Node *temp = *head_ref;
    while(temp->next != NULL){
        temp = temp->next;      // temp is last node
    }
    // previous node of the last node
    temp->prev->next = temp->next; // letting the previous node of the last pointing to NULL node
};
void print(Node *head_node){
    cout<<"NULL";
    while(head_node != NULL){
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
    
    delete_end(&head);
    print(head);
    return 0;
}
