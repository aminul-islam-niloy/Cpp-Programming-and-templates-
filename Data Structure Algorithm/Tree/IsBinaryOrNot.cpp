#include <iostream>
#include <climits>

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

bool isBSTUtil(struct Node *root, int minValue, int maxValue)
{
    if (!root)
        return true;

    if (root->data <= minValue || root->data >= maxValue)
        return false;

    return isBSTUtil(root->left, minValue, root->data) && isBSTUtil(root->right, root->data, maxValue);
}

bool isBST(struct Node *root)
{
    return isBSTUtil(root, INT_MIN, INT_MAX);
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

    if (isBST(root))
        cout << "The given tree is a Binary Search Tree (BST)." << endl;
    else
        cout << "The given tree is not a Binary Search Tree (BST)." << endl;

    return 0;
}
