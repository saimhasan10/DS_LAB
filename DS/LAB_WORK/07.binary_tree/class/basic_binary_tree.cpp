#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left_child;
    Node *right_child;

    Node(int val)
    {
        this->val = val;
        this->left_child = NULL;
        this->right_child = NULL;
    }
};

// binary tree function
Node *create_node(Node *parent, int val)
{
    if (parent == NULL)
    {
        Node *newNode = new Node(val);
        return newNode;
    }
    else
    {
        if (val <= parent->val)
        {
            parent->left_child = create_node(parent->left_child, val);
        }
        else
        {
            parent->right_child = create_node(parent->right_child, val);
        }
    }
    return parent;
}

// inorder print
void in_order(Node *parent)
{
    if (parent == NULL)
    {
        return;
    }
    in_order(parent->left_child);
    cout << parent->val << " ";
    in_order(parent->right_child);
}

int main()
{

    Node *root = NULL;
    root = create_node(root, 30);
    root = create_node(root, 10);
    root = create_node(root, 40);

    // inorder print
    in_order(root);

    return 0;
}
