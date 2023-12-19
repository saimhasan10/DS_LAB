// Write a program to search a name from a linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string name;
    Node *next;

    Node(string name)
    {
        this->name = name;
        this->next = NULL;
    }
};

// search function
void search_name(Node *head, string Name)
{
    Node *tmp = head;
    bool flag = false;

    while (tmp != NULL)
    {
        if (tmp->name == Name)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
    }
    if (flag == true)
    {
        cout << Name << " Found ";
    }
    else
    {
        cout << "Not found";
    }
}

int main()
{

    Node *head = new Node("Saim");
    Node *a = new Node("Hasan");
    Node *b = new Node("Nahid");
    Node *c = new Node("Jhon");
    Node *d = new Node("Cena");

    // connect
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    // search value
    search_name(head, "Hasan");

    return 0;
}
