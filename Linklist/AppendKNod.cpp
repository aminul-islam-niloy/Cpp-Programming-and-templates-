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

int length(node *head)
{
    int l1 = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l1++;
        temp = temp->next;
    }
    return l1;
}
node *KthAppend(node *&head, int k)
{
    if (head == NULL || k == 0) {
        return head;
    }

    int length = 1;
    node *tail = head;

    // Find the length of the linked list and the last node
    while (tail->next != NULL) {
        length++;
        tail = tail->next;
    }

    // Adjust k in case it's greater than the length
    k = k % length;
    
    if (k == 0) {
        return head;
    }

    // Find the new head and new tail
    node *newTail = head;
    for (int i = 1; i < length - k; i++) {
        newTail = newTail->next;
    }

    node *newHead = newTail->next;
    newTail->next = NULL;
    tail->next = head;

    // Update the head of the list
    head = newHead;

    return head;
}



int main()
{
    node *head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    insertAtTale(head, 5);
    insertAtTale(head, 6);

    displayList(head);

    node *newHead = KthAppend(head, 3);
    displayList(head);
}