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

// size of the list
int list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

// print list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// delete at position
void delete_node(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        // stop before the delete node
        tmp = tmp->next;
    }
    // store the node
    Node *deleteNode = tmp->next;

    // connect with the next node
    tmp->next = tmp->next->next;
    delete deleteNode;
}
// delete head node
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connect
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    print_linked_list(head);

    int pos;
    cin >> pos;

    if (pos >= list_size(head))
    {
        cout << "invalid position";
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head, pos);
    }
    cout << "List after deletion: ";
    print_linked_list(head);
    return 0;
}
