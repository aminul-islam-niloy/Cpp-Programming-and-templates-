#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PrintTree(struct Node *root)
{
    if (!root)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int leavesize = q.size();

        for (int i = 0; i < leavesize; i++)
        {
            Node *current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left)
            {
                q.push(current->left);
            }
            if (current->right)
            {
                q.push(current->right);
            }
        }
        cout << endl;
    }
}

void PreOrderTravarsal(struct Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    PreOrderTravarsal(root->left);
    PreOrderTravarsal(root->right);
}

void Inorder(struct Node *root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void PostOrder(struct Node *root)
{
    if (!root)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int main()
{

    struct Node *root = new Node(10);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(1);
    root->left->right = new Node(2);

    root->right->left = new Node(4);
    root->right->right = new Node(5);

    // PrintTree(root);

    // PreOrderTravarsal(root);
    //  Inorder(root);
    PostOrder(root);

    //         10
    //        /   \
    //       3     6
    //     /  \    / \
    //    1    2  4   5
}