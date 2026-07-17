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
Node *head = new Node(1);
void print(Node *head_node){
    cout<<"NULL";
    while(head_node != NULL){               // until it reaches a NULL node
        cout<<" < "<<head_node->data<<" > ";
        head_node = head_node->next;
    }
    cout<<"NULL";
}
int main(){
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->prev = NULL;
    head->next = four;
    four->prev = head;
    four->next = five;
    five->prev = four;
    five->next = seven;
    seven->prev = five;
    seven->next = NULL;

    print(five);
    return 0;
}
