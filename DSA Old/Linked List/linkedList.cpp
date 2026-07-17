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
// creating a global node and assigning it to NULL
node *head = NULL;

// creating a insert function for the head
void insert_head(int value){
    node *new_node = new node(value); // the new_node node containing the value as data
    if(head == NULL){ // checking wheater the head is NULL or not
        head = new_node; // since head is found NULL updating it to the new_node
        return;
    }
    // since head is not NULL
    node *temp = head; // storing the head node to a temporary node temp
    head = new_node; // updating the head to the new_node
    new_node->next = temp; // replacing the previous head as the next node of the new_node
}
// creating a insert function for the end or tail
void insert_end(int value){
    node *new_node = new node(value); // the new_node node containing the value as data
    if(head == NULL){ // checking wheater the head is NULL or not
        head = new_node; // since head is found NULL updating it to the new_node
        return;
    }
    // since head is not NULL
    node *temp = head; // storing the head node to a temporary node temp
    while(temp->next != NULL){
        temp = temp->next; // keep updating the temp (head)
    }
    // when reaches to the node that points to a NULL node
    temp->next = new_node; // finally updating the address
}
// creating a insert function to insert a node at the nth position
void insert_nth(int value, int k){
    node *new_node = new node(value);
    node *temp = head;
    if(k == 1){
        head = new_node;
        new_node->next = temp;
        return;
    }
    // since head is not NULL
    // k should be greater than 2
    for(int i=0; i<k-2; i++){
        temp = temp->next;  // head is now (k-1)th position's node
    }
    new_node->next = temp->next; // new_node is pointing the (k+1)th position's node
    temp->next = new_node;    // (k-1)th node is pointing the kth node
}
// create a delete function for deleting nth position's node
void delete_node(int n){
    node *temp = head;
    if(n == 1){
        head = head->next;
        temp = NULL; // assigning previous head to NULL
        return;
    }
    node *temp2 = head;
    for(int i=0; i<n-2; i++){
        temp = temp->next;       // temp is now (n-1)th node
    }
    for(int i=0; i<n-1; i++){
        temp2 = temp->next;     // temp2 is now nth node
    }
    temp->next = temp2->next; // assigning (n-1)th node to point which nth node is pointing
    temp2->next = NULL;       // assigning nth node to pointing to NULL
}
// creating a display function to display all node's data
void print(){
    while(head != NULL){ // until finds a NULL node
        cout<<head->data<<" -> ";
        head = head->next; // keep updating the head
    }
    cout<<"NULL"; // when through of node's data
}
int main(){
    insert_head(0);
    insert_end(2);
    insert_end(5);
    insert_end(7);
    insert_head(1);
    insert_nth(11,1);
    // delete_node(3);
    print();
    return 0;
}