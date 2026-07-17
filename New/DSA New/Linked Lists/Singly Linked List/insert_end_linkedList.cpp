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
void insert_end(int value){
    Node *new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void print(){
    while(head != NULL){
        cout<<head->data<<" > ";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    insert_end(1);
    insert_end(0);
    insert_end(4);
    insert_end(5);
    insert_end(7);
    print();
    return 0;
}
