#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    // traversing linked list through temp
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void displayList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *mergeSortedLists(node *head1, node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    node *mergedList = NULL;
    node *current = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (mergedList == NULL)
            {
                mergedList = current = head1;
            }
            else
            {
                current->next = head1;
                current = head1;
            }
            head1 = head1->next;
        }
        else
        {
            if (mergedList == NULL)
            {
                mergedList = current = head2;
            }
            else
            {
                current->next = head2;
                current = head2;
            }
            head2 = head2->next;
        }
    }

    if (head1 != NULL)
        current->next = head1;
    else if (head2 != NULL)
        current->next = head2;

    return mergedList;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);

    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);

    cout << "List 1: ";
    displayList(head1);
    cout << "List 2: ";
    displayList(head2);

    node *mergedList = mergeSortedLists(head1, head2);

    cout << "Merged List: ";
    displayList(mergedList);

    return 0;
}
