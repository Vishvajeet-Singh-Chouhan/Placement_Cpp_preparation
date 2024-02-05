#include<iostream>
#include<stdlib.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void push(struct Node **head, int value) {
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;
    int n;
    while(1) {
        cin >> n;
        if(n != -1)
            push(&head, n);
        else
            break;
    }
    print(head);
}
