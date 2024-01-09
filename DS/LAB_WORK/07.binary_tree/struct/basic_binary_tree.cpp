#include <bits/stdc++.h>
using namespace std;

// structure
struct Node
{
    int data;
    Node *left_child = nullptr;
    Node *right_child = nullptr;
};

// create node
Node *createNode(Node *parent, int data)
{
    if (parent == nullptr)
    {
        Node *newNode = new Node();
        newNode->data = data;
        return newNode;
    }
    else
    {
        if (data <= parent->data)
        {
            parent->left_child = createNode(parent->left_child, data);
        }
        else
        {
            parent->right_child = createNode(parent->right_child, data);
        }
    }
    return parent;
}

// print the tree
void in_order(Node *parent)
{
    if (parent == nullptr)
    {
        return;
    }
    in_order(parent->left_child);
    cout << parent->data << " ";
    in_order(parent->right_child);
}

int main()
{
    Node *root = nullptr;
    root = createNode(root, 89);
    root = createNode(root, 96);
    root = createNode(root, 90);

    // inorder print
    cout << endl;
    in_order(root);
    cout << endl;

    return 0;
}
