#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *next; // pointer to the next node
    Node *prev; // pointer to the previous node
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node *head = new Node(1);

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

    // print();
    cout<<head->prev<<" < "<<head->data<<" <-> "<<head->next->data<<" <-> "<<five->data<<" <-> "<<five->next->data<<" > "<<seven->next;
    return 0;
}