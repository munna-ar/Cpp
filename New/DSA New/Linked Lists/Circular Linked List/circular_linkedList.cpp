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

int main(){
    Node *head = new Node(1);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *seven = new Node(7);

    head->next = four;
    four->next = five;
    five->next = seven;
    seven->next = head;
    
    cout<<head->data<<" > "<<head->next->data<<" > "<<five->data<<" > "<<five->next->data<<" > "<<seven->next->data;
    return 0;
}