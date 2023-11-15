#include <bits/stdc++.h>
using namespace std;
// to reverse an node we can go with 2 method
// iterative method and recursive method

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

node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    // new head
    return prev;
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
}

// reverse k node
node *reverseK(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;

    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverseK(next, k);
    }

    return prev;
}

int main()
{
    node *head = NULL;
    insertList(head, 4);
    insertList(head, 3);
    insertList(head, 2);
    insertList(head, 1);
    displayNode(head);

    // node *newHead = reverse(head);
    // displayNode(newHead);

    node *newH = reverseRecursive(head);
    displayNode(newH);
}