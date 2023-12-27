#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node *prev;

    Node(int val)
        : val(val), next(nullptr), prev(nullptr) {}
};

// print normal
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// print reverse
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_normal(head);
    print_reverse(tail);

    return 0;
}
