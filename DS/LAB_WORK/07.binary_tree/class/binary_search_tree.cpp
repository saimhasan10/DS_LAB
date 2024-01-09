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

// search in tree
void search(Node *parent, int val)
{
    if (parent == NULL)
    {
        cout << "Not found" << endl;
    }
    else if (parent->val == val)
    {
        cout << "Found: " << parent->val << endl;
    }
    else if (val < parent->val)
    {
        search(parent->left_child, val);
    }
    else
    {
        search(parent->right_child, val);
    }
}

int main()
{

    Node *root = NULL;
    root = create_node(root, 20);
    root = create_node(root, 30);
    root = create_node(root, 10);
    root = create_node(root, 25);
    root = create_node(root, 60);
    root = create_node(root, 40);
    root = create_node(root, 65);

    // serach
    search(root, 25);

    return 0;
}
