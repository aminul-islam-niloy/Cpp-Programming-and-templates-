#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev; // Added prev pointer for doubly linked list

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
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
    n->prev = temp; // Set the prev pointer
}

void insertIntoHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head->prev = n; // Update the prev pointer of the current head
    head = n;
}

void insertIntoMid(node *&head, int pos, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    if (temp->next == NULL)
    {
        temp->next = n;
        n->prev = temp;
        return;
    }

    // traversing linked list through temp
    while (temp->next != NULL)
    {
        if (temp->data == pos)
        {
            n->next = temp->next;
            n->prev = temp;
            temp->next->prev = n; // Update the prev pointer of the next node
            temp->next = n;
            return;
        }
        temp = temp->next;
    }
}

void deleteNode(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    // If the node to be deleted is the head
    if (head->data == val)
    {
        node *temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL; // Update the prev pointer of the new head
        delete temp;
        return;
    }

    // Traverse the list to find the node to be deleted
    node *temp = head;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }

    // If the node is not found
    if (temp->next == NULL)
    {
        cout << " not found in the list." << endl;
        return;
    }

    // Node found, update pointers to skip the node
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    if (temp->next != NULL)
        temp->next->prev = temp; // Update the prev pointer of the next node

    // Delete the node
    delete toDelete;
}

void displayList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchList(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    
       displayList(head);

    // insertIntoHead(head, 9);

    // insertIntoMid(head, 3, 8);

    deleteNode(head, 4);
    displayList(head);

    if (searchList(head, 3))
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
}
