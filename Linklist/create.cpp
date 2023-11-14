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

void insertAtTale(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    // traversing linklist through temp
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
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
        return;
    }

    // traversing linklist through temp
    while (temp->next != NULL)
    {
        if (temp->data == pos)
        {
            n->next = temp->next;
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
        delete temp;
        return;
    }

    // Traverse the list to find the node to  deleted
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

    // Delete the node
    delete toDelete;
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
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);

   // insertIntoHead(head, 9);
    
    //insertIntoMid(head,3,8);

    deleteNode(head,4);
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