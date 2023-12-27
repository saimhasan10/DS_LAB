// implementation of queue by following tail insertion and head deletion
#include <bits/stdc++.h>
using namespace std;

// doubly node
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

//  stack class
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push method based on tail insert way
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    // pop method based on head deletion way
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }
    // the top value
    int front()
    {
        return head->val;
    }
    // for the sz of the list
    int size()
    {
        return sz;
    }

    // check empty or not
    bool isEmpty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // print the  list
    void print_list()
    {
        if (head == NULL)
        {
            cout << "Empty list" << endl;
            return;
        }
        Node *temp = head;
        cout << "The list is: ";
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    // stack object
    myQueue q;
    while (true)
    {
        cout << endl;
        cout << "Select a option: " << endl
             << endl;

        cout << "1.Push in queue." << endl;
        cout << "2.Pop in queue." << endl;
        cout << "3.Print front of queue." << endl;
        cout << "4.Print the list" << endl;
        cout << "5.Exit" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            // push in stack
            int val;
            cin >> val;
            q.push(val);
            cout << "pushed successfully" << endl;
        }
        else if (op == 2)
        {
            // pop in stack
            q.pop();
            cout << "Poped successfully" << endl;
        }
        else if (op == 3)
        {
            // Print Top of stack
            cout << " The front of queue: " << q.front() << endl;
        }
        else if (op == 4)
        {
            // print the list
            q.print_list();
        }
        else if (op == 5)
        {
            // exit
            break;
        }
        else
        {
            cout << "choose the right option" << endl;
        }
    }
    return 0;
}
