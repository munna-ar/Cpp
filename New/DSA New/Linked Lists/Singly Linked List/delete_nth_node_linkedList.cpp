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
void delete_node(int n){
    Node *temp = head;
    if(n == 1){
        head = head->next;      // first node now swaping with the second node
        temp = NULL;         //  assigning previous first node to NULL
        return;
    }
    // since head is not NULL
    for(int i=0; i<n-2; i++){
        temp = temp->next;    // temp is (n-1)th node and it's pointing nth node
    }
    Node *temp2 = head;
    for(int i=0; i<n-1; i++){
        temp2 = temp2->next; // temp2 is nth node and it's pointing (n+1)th node
    }
    temp->next = temp2->next;
    temp2->next = NULL;
}
void print(){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);
    Node *zero = new Node(0);

    head->next = four;
    four->next = five;
    five->next = zero;
    zero->next = seven;
    seven->next = NULL;       // pointing a NULL node
    
    delete_node(4);
    print();
    return 0;
}
