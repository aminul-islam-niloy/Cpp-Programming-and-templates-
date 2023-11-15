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

void insertInSortedOrder(node *&head, int val)
{
    node *newNode = new node(val);

    if (head == NULL || val < head->data)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        node *current = head;
        while (current->next != NULL && current->next->data < val)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
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

int main()
{
    node *sortedList = NULL;

    // Insert elements into the sorted linked list
    insertInSortedOrder(sortedList, 5);
    insertInSortedOrder(sortedList, 2);
    insertInSortedOrder(sortedList, 8);
    insertInSortedOrder(sortedList, 1);
    insertInSortedOrder(sortedList, 6);

    // Display the sorted linked list
    cout << "Sorted Linked List: ";
    displayList(sortedList);

    return 0;
}
