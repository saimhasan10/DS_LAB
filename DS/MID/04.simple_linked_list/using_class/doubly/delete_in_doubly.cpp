#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// find the size
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// print the list
void print_list(Node *head)
{
    Node *temp = head;
    cout << "The list is:";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// delete at position
void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    // stop befor delete node
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

// delete at tail
void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    // declare new tail
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL; // to avoid garbage
}

// delete head
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL; // to avoid garbage
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;

    print_list(head);
    cout << "Enter position to delete:";
    int pos;
    cin >> pos;
    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }
    print_list(head);
    return 0;
}
