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

void delete_end(){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    int count = 1;                // since head exists (1 node)
    while(temp->next != NULL){
        temp = temp->next;       // temp is last node   
        count++;
    }
    Node *temp2 = head;
    for(int i=0; i<count-2; i++){
        temp2 = temp2->next;    // temp2 is previous node of last node
    }
    temp2->next = temp->next;
    // temp = NULL;
    
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
    
    delete_end();
    print();
    return 0;
}
