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
            parent->left_child = create_node(parent->left_child, data);
        }
        else
        {
            parent->right_child = create_node(parent->right_child, data);
        }
    }
    return parent;
}

// preorder print
void pre_order(Node *parent)
{
    if (parent == nullptr)
    {
        return;
    }
    cout << parent->data << " ";
    pre_order(parent->left_child);
    pre_order(parent->right_child);
}
// in order print
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
// post order print
void post_order(Node *parent)
{
    if (parent == nullptr)
    {
        return;
    }
    post_order(parent->left_child);
    post_order(parent->right_child);
    cout << parent->data << " ";
}

int main()
{

    Node *root = nullptr;
    root = create_node(root, 20);
    root = create_node(root, 30);
    root = create_node(root, 10);
    root = create_node(root, 25);
    root = create_node(root, 60);
    root = create_node(root, 40);
    root = create_node(root, 65);

    cout << endl;
    cout << "Pre-order traverse: ";
    pre_order(root);
    cout << endl;
    cout << "In-order traverse: ";
    in_order(root);
    cout << endl;
    cout << "Post-order traverse: ";
    post_order(root);
    cout << endl;

    return 0;
}
