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

void delete_head(){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
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
    
    delete_head();
    print();
    return 0;
}