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

node *getIntersectionNode(node *headA, node *headB)
{
    int lenA = length(headA);
    int lenB = length(headB);

    // Make the linked lists equal in length
    while (lenA < lenB)
    {
        headB = headB->next;
        lenB--;
    }

    while (lenA > lenB)
    {
        headA = headA->next;
        lenA--;
    }

    // Traverse both linked lists until an intersection is found
    while (headA != NULL && headB != NULL)
    {
        if (headA == headB)
        {
            return headA; // Intersection found
        }

        headA = headA->next;
        headB = headB->next;
    }

    return NULL; // No intersection found
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);

    insertAtTail(head2, 6);
    insertAtTail(head2, 7);

    // Make an intersection by connecting the last node of the first list to the second list
    head2->next->next = head1->next->next->next;

    displayList(head1);
    displayList(head2);

    node *intersectionNode = getIntersectionNode(head1, head2);

    if (intersectionNode != NULL)
    {
        cout << "Intersection Node: " << intersectionNode->data << endl;
    }
    else
    {
        cout << "No Intersection" << endl;
    }

    return 0;
}
