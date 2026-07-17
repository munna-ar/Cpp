#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *next; // points to the next node
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    // creating three node, every node has two things, one is data and the other is a pointer
    Node *one = new Node(1); // first node
    Node *five= new Node(5);
    Node *seven = new Node(7);

    one->next = five;
    five->next = seven;
    seven->next = NULL; // 7 pointing a NULL node

    cout<<one->data<<" -> "<<one->next->data<<" -> "<<five->next->data<<" > "<<seven->next;

    return 0;
}