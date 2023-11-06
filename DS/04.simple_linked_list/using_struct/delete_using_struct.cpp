#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

// Size of the list
int list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != nullptr)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

// Print list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Delete at position
void delete_node(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        // Stop before the delete node
        tmp = tmp->next;
    }
    // Store the node
    Node *deleteNode = tmp->next;

    // Connect with the next node
    tmp->next = tmp->next->next;
    delete deleteNode;
}

// Delete head node
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    Node *head = new Node{10};
    Node *a = new Node{20};
    Node *b = new Node{30};
    Node *c = new Node{40};
    Node *d = new Node{50};

    // Connect
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    print_linked_list(head);

    cout << "Choose a position to delete: ";
    int pos;
    cin >> pos;

    if (pos >= list_size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
        cout << "List after deletion: ";
        print_linked_list(head);
    }
    else
    {
        delete_node(head, pos);
        cout << "List after deletion: ";
        print_linked_list(head);
    }

    return 0;
}
