#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string name;
    int id;
    Node *next;
};

// Constructor for Node
Node createNode(string name, int id, Node *next = nullptr)
{
    Node newNode;
    newNode.name = name;
    newNode.id = id;
    newNode.next = next;
    return newNode;
}

// Print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;

    cout << "The list is:" << endl;
    while (tmp != nullptr)
    {
        cout << tmp->name << " " << tmp->id << " " << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(createNode("Saim", 97));
    Node *a = new Node(createNode("Hasan", 98));
    Node *b = new Node(createNode("Nahid", 99));
    Node *c = new Node(createNode("Jhon", 100));
    Node *d = new Node(createNode("Cena", 101));

    // Connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    // Print
    print_linked_list(head);

    delete head;

    return 0;
}
