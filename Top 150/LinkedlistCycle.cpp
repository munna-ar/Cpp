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
node *head = new node(3);
void insert_head(int value){
    node *new_node = new node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    head = new_node;
    new_node->next = temp;
}
void insert_end(int value){
    node *new_node = new node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void display(){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}
class Solution{
    public:
    bool has_cycle(node *head){
        node *fast = head;
        node *slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
int main(){
    insert_end(2);
    insert_end(0);
    insert_end(-4);
    Solution a;
    cout<<a.has_cycle(head);
    return 0;
}