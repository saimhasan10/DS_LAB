#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left_child = nullptr;
    Node *right_child = nullptr;
};

// binary tree function
Node *create_node(Node *parent, int data)
{
    if (parent == NULL)
    {
        Node *newNode = new Node();
        newNode->data = data;
        return newNode;
    }
    else
    {
        if (data <= parent->data)
        {
            parent->left_child = create_node(parent->left_child, data);
        }
        else
        {
            parent->right_child = create_node(parent->right_child, data);
        }
    }
    return parent;
}

// search in tree
void search(Node *parent, int data)
{
    if (parent == NULL)
    {
        cout << "Not found" << endl;
    }
    else if (parent->data == data)
    {
        cout << "Found: " << parent->data << endl;
    }
    else if (data < parent->data)
    {
        search(parent->left_child, data);
    }
    else
    {
        search(parent->right_child, data);
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
    cout << endl;
    search(root, 25);
    cout << endl;

    return 0;
}
