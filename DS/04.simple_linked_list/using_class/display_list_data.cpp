// Write a program to create a linked list of five nodes where each node of the list will contain Name and ID. Display the data of the list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string name;
    int id;
    Node *next;

    Node(string name, int id)
    {
        this->name = name;
        this->id = id;
        this->next = NULL;
    }
};

// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;

    cout << "The list is:" << endl;
    while (tmp != NULL)
    {
        cout << tmp->name << " " << tmp->id << " " << endl;
        tmp = tmp->next;
    }
    // cout << endl;
}

int main()
{
    Node *head = new Node("Saim", 97);
    Node *a = new Node("Hasan", 98);
    Node *b = new Node("Nahid", 99);
    Node *c = new Node("Jhon", 100);
    Node *d = new Node("Cena", 101);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    // print
    print_linked_list(head);

    return 0;
}
