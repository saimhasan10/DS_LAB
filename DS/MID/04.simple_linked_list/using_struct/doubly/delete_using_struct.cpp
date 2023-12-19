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

// find the size
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
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
    while (temp != nullptr)
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
    // Stop before the node to delete
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    if (temp->next != nullptr)
    {
        temp->next->prev = temp;
    }
    delete deleteNode;
}

// delete at tail
void delete_tail(Node *&head, Node *&tail)
{
    if (tail == nullptr)
    {
        return; // Nothing to delete, list is empty
    }

    Node *deleteNode = tail;
    tail = tail->prev;
    if (tail != nullptr)
    {
        tail->next = nullptr;
    }
    else
    {
        head = nullptr; // Update head when the list becomes empty
    }
    delete deleteNode;
}

// delete head
void delete_head(Node *&head, Node *&tail)
{
    if (head == nullptr)
    {
        return; // Nothing to delete, list is empty
    }

    Node *deleteNode = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    else
    {
        tail = nullptr; // Update tail when the list becomes empty
    }
    delete deleteNode;
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
