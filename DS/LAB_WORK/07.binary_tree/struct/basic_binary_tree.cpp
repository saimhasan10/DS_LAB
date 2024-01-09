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
Node *createNode(int data)
{

    Node *newNode = new Node();
    newNode->data = data;
    return newNode;
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
    root = createNode(5);
    root->left_child = createNode(10);
    root->right_child = createNode(2);
    root->left_child->left_child = createNode(1);
    root->left_child->right_child = createNode(50);
    root->right_child->right_child = createNode(20);

    // inorder print
    cout << endl;
    in_order(root);
    cout << endl;

    return 0;
}
