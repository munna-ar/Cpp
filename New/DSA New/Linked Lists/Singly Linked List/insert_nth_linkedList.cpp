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
void insert_nth(int value, int k){
    Node *new_node = new Node(value);
    Node *temp = head;
    if(k == 1){       // if theres only one node exists (head)
        head = new_node;
        new_node->next = temp;
        return;
    }
    // since head is not NULL
    Node *temp2 = head;            // this function won't work for first and second node   
    for(int i=0; i<k-2; i++){     //  we have to create first and second node 
        temp2 = temp2->next;
    }
    new_node->next = temp2->next; //       1 > 2 > 3 > 4 > 5
    temp2->next = new_node;
}
void print(){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    insert_nth(7,1);
    insert_nth(4,1);
    insert_nth(5,2);
    insert_nth(11,3);
    insert_nth(1,1);
    insert_nth(10,1);
    print();
    return 0;
}