#include<iostream>

using namespace std;

class node{
    public:
    int degree;
    int coeff;
    node *next;
    node(){
        this -> next = NULL;
    }
};

void insertNode(node *head, int data, int degree){
    if(head == NULL){
        node *temp = new node;
        temp -> degree = degree;
        temp -> coeff = data;
        temp -> next = NULL;
        head = temp;
        delete temp;
        return;
    }
    node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    node *newNode = new node;
    newNode -> degree = degree;
    newNode -> coeff = data;
    newNode -> next = NULL;
    temp -> next = newNode;
    delete temp;
}

node* addPolynomial(node *p1, node* p2){
    node *temp1 = p1;
    node *temp2 = p2;
    node *res = new node;
    while(temp1 -> next != NULL && temp2 -> next != NULL){
        if(temp1 -> degree == temp2 -> degree){
            int csum = temp1 -> coeff + temp2 -> coeff;
            insertNode(res, csum, temp1 -> degree);
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }else if(temp1 -> degree > temp2 -> degree){
            insertNode(res, temp1 -> coeff, temp1 -> degree);
            temp1 = temp1 -> next;
        }else{
            insertNode(res, temp2 -> coeff, temp2 -> degree);
            temp2 = temp2 -> next;
        }
    }
}

void displayLinkedList(node *head){
    node *temp = head;
    while(temp -> next != NULL){
        cout << temp -> coeff << temp -> degree << " + ";
        temp = temp -> next;
    }
}

int main(int argc, char const *argv[])
{
    node *p1,p2;
    insertNode(p1,3,3);
    insertNode(p1,2,2);
    insertNode(p1,1,1);
    insertNode(p1,1,0);
    displayLinkedList(p1);
    return 0;
}
