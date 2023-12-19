#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int val) : val(val), next(nullptr) {}
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == nullptr)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl
         << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}

int main()
{
    Node *head = nullptr;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            break;
        }
    }

    // Don't forget to free memory
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
