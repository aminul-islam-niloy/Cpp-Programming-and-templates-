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

// Function to insert a node at the end of the linked list
void insertList(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Function to display the linked list
void displayNode(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to create a cycle in the linked list
void createCycle(node *&head, int pos)
{
    if (pos == 0)
        return;

    node *tail = head;
    node *loopStart = head;

    while (tail->next != NULL)
    {
        if (pos == 1)
            loopStart = tail;
        tail = tail->next;
        pos--;
    }

    tail->next = loopStart; // Create a cycle
}

// Function to detect and return the starting point of a cycle (if any)
node *detectCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return slow; // Cycle detected, return the meeting point
        }
    }

    return NULL; // No cycle
}

// Function to remove a cycle from the linked list
void removeCycle(node *&head, node *meetingPoint)
{
    node *start = head;
    node *end = meetingPoint;

    while (start->next != end->next)
    {
        start = start->next;
        end = end->next;
    }

    end->next = NULL; // Remove the cycle
}

int main()
{
    node *head = NULL;
    insertList(head, 4);
    insertList(head, 3);
    insertList(head, 2);
    insertList(head, 1);

    // Display the original linked list
    cout << "Original Linked List:" << endl;
    displayNode(head);

    // Create a cycle in the linked list (connecting the last node to the second node)
    createCycle(head, 2);
    //displayNode(head);

    // Detect and display the cycle in the linked list
    node *meetingPoint = detectCycle(head);
    if (meetingPoint != NULL)
        cout << "Cycle detected at node: " << meetingPoint->data << endl;
    else
        cout << "No cycle detected." << endl;

    // Remove the cycle from the linked list
    removeCycle(head, meetingPoint);

    // Display the modified linked list after removing the cycle
    cout << "Linked List after removing the cycle:" << endl;
    displayNode(head);

    return 0;
}
