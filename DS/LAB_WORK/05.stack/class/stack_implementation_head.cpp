// implementation of stack from head side

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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push method based on head insert way
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // pop method based on tail delete way
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
    // the top value of the stack
    int top()
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
    myStack st;
    while (true)
    {
        cout << endl;
        cout << "Select a option: " << endl
             << endl;

        cout << "1.Push in stack." << endl;
        cout << "2.Pop in stack." << endl;
        cout << "3.Print Top of stack." << endl;
        cout << "4.Print the list" << endl;
        cout << "5.Exit" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            // push in stack
            int val;
            cin >> val;
            st.push(val);
            cout << "pushed successfully" << endl;
        }
        else if (op == 2)
        {
            // pop in stack
            st.pop();
            cout << "Poped successfully" << endl;
        }
        else if (op == 3)
        {
            // Print Top of stack
            cout << " The top of stack: " << st.top() << endl;
        }
        else if (op == 4)
        {
            // print the list
            st.print_list();
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
