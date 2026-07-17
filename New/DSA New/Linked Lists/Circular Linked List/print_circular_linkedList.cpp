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
void print(Node *head_node){
    if(head_node == NULL){
        return;
    }
    Node *temp = head_node;
    do{
        cout<<temp->data<<" > ";
        temp = temp->next;
    }while(temp != head_node);
}
int main(){
    Node *head = new Node(1);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->next = four;
    four->next = five;
    five->next = seven;
    seven->next = head;

    print(five);
    return 0;
}
