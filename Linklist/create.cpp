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

    insertIntoHead(head, 9);
    displayList(head);

    if (searchList(head, 5))
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
}