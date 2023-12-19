#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    // store in the temporary
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next; // connect the next node with the new node
    tmp->next = newNode;       // connect the new node with the previous node
}

int main()
{
    Node *head = new Node(10);
    int pos, v;

    print_linked_list(head);
    cout << "insert position number and value: ";
    cin >> pos >> v;

    insert_at_position(head, pos, v);

    print_linked_list(head);

    return 0;
}
