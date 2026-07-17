#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }
};
node *head = NULL;
void insert_head(int value){
    node *new_node = new node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    head = new_node;
    new_node->next = temp;
}
void insert_end(int value){
    node *new_node = new node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void insert_nth(int value, int n){
    node *new_node = new node(value);
    node *temp = head;
    if(n==1){
        head = new_node;
        new_node->next = temp;
        return;
    }
    for(int i=0; i<n-2; i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
int count(){
    if(head == NULL){
        return 0;
    }
    node *temp = head;
    int count = 1;           // since head is a node
    while(temp->next != NULL){
        temp = temp->next;
        count++;
    }
    cout<<count;
}
int main(){
    insert_head(1);
    insert_end(7);
    insert_nth(5,2);
    insert_end(0);
    count();
    return 0;
}