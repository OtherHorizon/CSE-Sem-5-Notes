#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//insert from the start of the doubly linked list
void insert_from_start(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;  
    new_node->next = *head;
    new_node->prev = NULL;
    if (*head != NULL)
        (*head)->prev = new_node;
    *head = new_node;
}

//insert from the end of the doubly linked list
void insert_from_end(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *head;
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
}

// deletion from the start of the doubly linked list
void delete_from_start(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// deletion from the end of the doubly linked list
void delete_from_end(struct node **head)
{
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}

// display the doubly linked list
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    struct node *head = NULL;

    insert_from_start(&head, 1);
    insert_from_start(&head, 2);
    insert_from_start(&head, 3);
    insert_from_end (&head, 4);
    insert_from_end (&head, 5);
    insert_from_end (&head, 6);
    display(head);
    delete_from_start(&head);
    display(head);
    delete_from_end(&head);
    display(head);
}