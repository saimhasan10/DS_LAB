#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string name;
    int id;
    Node *next;
};

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
    Node *head = new Node;
    head->name = "Saim";
    head->id = 97;
    head->next = nullptr;

    Node *a = new Node;
    a->name = "Hasan";
    a->id = 98;
    a->next = nullptr;

    Node *b = new Node;
    b->name = "Nahid";
    b->id = 99;
    b->next = nullptr;

    Node *c = new Node;
    c->name = "Jhon";
    c->id = 100;
    c->next = nullptr;

    Node *d = new Node;
    d->name = "Cena";
    d->id = 101;
    d->next = nullptr;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    return 0;
}
