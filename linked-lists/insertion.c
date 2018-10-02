#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void push(struct node **head_ref, int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = (*head_ref);
    (*head_ref) = newnode;
}

void insertend(struct node **head_ref, int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    
    if(*head_ref == NULL){
        *head_ref = newnode;
    }
}

void display(struct node *head_ref){
    while(head_ref != NULL){
        printf("%d", head_ref -> data);
        head_ref = head_ref -> next;
    }
}

int main(){
    struct node *head = NULL;
    push(&head,3);
    push(&head,5);
    display(head);
}