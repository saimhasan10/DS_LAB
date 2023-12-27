#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string name;
    Node *next;
};

// Search function
void search_name(Node *head, string Name)
{
    Node *tmp = head;
    bool found = false;

    while (tmp != nullptr)
    {
        if (tmp->name == Name)
        {
            found = true;
            break;
        }
        tmp = tmp->next;
    }

    if (found == true)
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
    Node *head = new Node{"Saim"};
    Node *a = new Node{"Hasan"};
    Node *b = new Node{"Nahid"};
    Node *c = new Node{"Jhon"};
    Node *d = new Node{"Cena"};

    // connect
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    cout << endl;
    // Search value
    search_name(head, "Hasan");

    return 0;
}
