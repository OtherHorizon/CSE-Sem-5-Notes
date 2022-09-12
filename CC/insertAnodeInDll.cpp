// insert a node in a sorted doubly linked list

#include <iostream>
using namespace std;

struct doublyLinkedListNode {
    int data;
    doublyLinkedListNode *next;
    doublyLinkedListNode *prev;
};

doublyLinkedListNode* sortedInsert(doublyLinkedListNode* head, int data) {
    doublyLinkedListNode *newNode = new doublyLinkedListNode;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL) {
        head = newNode;
        return head;
    }
    if (head->data > data) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }
    doublyLinkedListNode *temp = head;
    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
//display the doubly linked list
void display(doublyLinkedListNode *head) {
    doublyLinkedListNode *start = head;
    while (start) {
        cout << start->data << " ";
        start = start->next;
    }
}

int main(){
    doublyLinkedListNode *head = NULL;
    head = sortedInsert(head, 1);
    head = sortedInsert(head, 5);
    head = sortedInsert(head, 2);
    head = sortedInsert(head, 6);
    head = sortedInsert(head, 4);
    head = sortedInsert(head, 3);

    display(head);
    return 0;
}
