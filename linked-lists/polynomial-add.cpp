#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertend(struct node **head_ref, int data){
    node *newnode = new node(data);
    node *last = *head_ref;
    if(*head_ref == NULL){
        *head_ref = newnode;
        return;
    }
    while(last -> next != NULL){
        last = last -> next;
    }
    last ->next = *head_ref;
    return;
}

void display(node *head_ref){
    while(head_ref != NULL){
        cout << head_ref -> data << " ";
        head_ref = head_ref -> next;
    }
    cout << "\n";
}

int main(){
    node *head = NULL;
    display(head);
    insertend(&head,1);
    insertend(&head,2);
    display(head);
    return 0;
}