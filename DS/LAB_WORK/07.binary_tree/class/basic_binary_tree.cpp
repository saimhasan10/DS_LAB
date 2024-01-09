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
Node *createNode(int val)
{
    Node *newNode = new Node(val);
    return newNode;
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
    root = createNode(5);
    root->left_child = createNode(10);
    root->right_child = createNode(2);
    root->left_child->left_child = createNode(1);
    root->left_child->right_child = createNode(50);
    root->right_child->right_child = createNode(20);

    // inorder print
    in_order(root);

    return 0;
}
