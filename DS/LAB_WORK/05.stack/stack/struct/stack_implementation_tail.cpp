// implementation of stack from tail side

#include <bits/stdc++.h>
using namespace std;

//  doubly block
struct Block
{
    int val;
    Block *next;
    Block *prev;

    Block(int val)
    {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// stack operations
struct ourStack
{
    Block *head = nullptr;
    Block *tail = nullptr;
    int sz = 0;

    // push in stack
    void push(int val)
    {
        sz++;
        Block *newNode = new Block(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    // pop in stack
    void pop()
    {
        sz--;
        Block *deleteNode = tail;
        tail = tail->prev;

        if (tail == nullptr)
        {
            head = nullptr;
        }
        else
        {
            tail->next = nullptr;
        }
        delete deleteNode;
    }

    // the top value
    int top()
    {
        return tail->val;
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

    // print the list
    void print_list()
    {
        if (head == nullptr)
        {
            cout << "Empty list" << endl;
            return;
        }

        Block *temp = head;
        cout << "The list is: ";
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    ourStack st;
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
            cout << "list after poped: ";
            st.print_list();
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
