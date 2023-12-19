#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    string name;
    float cgpa;
    Node *next;

    Node(int id, string name, float cgpa)
    {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
        this->next = NULL;
    }
};

// print the list
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->id << " " << temp->name << " " << temp->cgpa << endl;
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// insert at tail
void insert_at_tail(Node *&head, int id, string name, float cgpa)
{
    Node *newNode = new Node(id, name, cgpa);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Choose an option:" << endl;
        cout << "1. Enter information" << endl;
        cout << "2. print information" << endl;
        cout << "3. exit" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            int id;
            string name;
            float cgpa;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter CGPA: ";
            cin >> cgpa;
            insert_at_tail(head, id, name, cgpa);
        }
        else if (op == 2)
        {
            for (Node *i = head; i->next != NULL; i = i->next)
            {
                for (Node *j = i->next; j != NULL; j = j->next)
                {
                    if (i->id > j->id)
                    {
                        swap(i->id, j->id);
                        swap(i->name, j->name);
                        swap(i->cgpa, j->cgpa);
                    }
                }
            }
            print_list(head);
        }
        else if (op == 3)
        {
            break;
        }
        else
        {
            cout << "select a correct option" << endl;
        }
    }
    return 0;
}
