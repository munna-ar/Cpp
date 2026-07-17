#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
int main(){
    node* one = new node();
    node* five = new node();
    node* seven = new node();
    one->data = 1;
    five->data = 5;
    seven->data = 7;
    one->next = five;
    five->next = seven;
    seven->next = NULL;
    cout<<one->data<<" "<<one->next->data<<" "<<five->next->data<<" "<<seven->next;
    return 0;
}