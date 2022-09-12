// compare if two linked list are same or not and return 0 and 1 accordingly
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head1 = NULL;
Node *head2 = NULL;
void insert1(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head1;
    head1 = temp;
}
void insert2(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head2;
    head2 = temp;
}
void print1()
{
    Node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print2()
{
    Node *temp = head2;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int compare()
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL)
    {
        return 1;
    }
    return 0;
}
int main()
{
    insert1(1);
    insert1(2);
    insert1(3);
    insert1(4);
    insert1(5);
    insert2(1);
    insert2(2);
    insert2(3);
    insert2(4);
    insert2(5);
    print1();
    print2();
    cout << compare();
    return 0;
}