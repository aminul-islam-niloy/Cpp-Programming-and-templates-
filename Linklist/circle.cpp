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

void insertNode(node *&head, int val)
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

void createCycle(node *&head, int pos)
{
    if (pos == 0)
    {
        return;
    }
    int count = 0;
    node *tail = head;
    node *loopStart;

    while (tail->next != NULL)
    {
        if (count == pos)
        {
            loopStart = tail;
        }
        tail = tail->next;
        count++;
    }

    tail->next = loopStart;
}

void displayList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

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
            return slow;
            // Cycle detected
        }
    }

    return NULL; // No cycle
}

void removeCycle(node *&head, node *meet)
{
    node *start = head;
    node *end = meet;

    // to to travarse a
    while (start->next != end->next)
    {
        start = start->next;
        end = end->next;
    }

    end->next = NULL; // remove
}

int main()
{
    node *head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);

    displayList(head);

    int pos = 4;
    createCycle(head, pos);

    node *cycleFound = detectCycle(head);
    //displayList(head);

    if (cycleFound != NULL)
    {
        cout << "Found at " << cycleFound->data << endl;
    }
    else
    {
        cout << "Not found";
    }

    removeCycle(head, cycleFound);

    displayList(head);
}