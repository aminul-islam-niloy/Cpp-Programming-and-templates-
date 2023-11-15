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
        head->next = head; // Make it circular
        return;
    }

    node *temp = head;

    // traversing linklist through temp
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head; // Make it circular
}

void insertIntoHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        head->next = head; // Make it circular
        return;
    }

    node *temp = head;

    // traversing linklist through temp
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head; // Make it circular
    head = n;
}

void insertIntoMid(node *&head, int pos, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        head->next = head; // Make it circular
        return;
    }

    node *temp = head;

    if (temp->next == head)
    {
        temp->next = n;
        n->next = head;
        return;
    }

    // traversing linklist through temp
    while (temp->next != head)
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

    node *temp = head;
    node *prev = NULL;

    // Traverse the circular list to find the node to be deleted
    do
    {
        if (temp->data == val)
        {
            if (temp == head)
            {
                // If the node to be deleted is the head
                prev = head;
                while (prev->next != head)
                {
                    prev = prev->next;
                }
                if (head->next == head)
                {
                    // If there is only one node in the list
                    delete head;
                    head = NULL;
                }
                else
                {
                    prev->next = head->next;
                    delete head;
                    head = prev->next;
                }
            }
            else
            {
                // Node found, update pointers to skip the node
                prev->next = temp->next;
                delete temp;
            }
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);

    // If the node is not found
    cout << val << " not found in the list." << endl;
}

void displayList(node *head)
{
    if (!head)
    {
        cout << "Empty Circular Linked List" << endl;
        return;
    }

    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "Head" << endl;
}

bool searchList(node *head, int key)
{
    if (!head)
    {
        return false;
    }

    node *temp = head;
    do
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    } while (temp != head);

    return false;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

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

    return 0;
}
