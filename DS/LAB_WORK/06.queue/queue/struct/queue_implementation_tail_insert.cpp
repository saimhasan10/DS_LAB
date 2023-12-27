// implementation of queue by following tail insertion and head deletion
#include <bits/stdc++.h>
using namespace std;

// doubly Block
struct Block
{
public:
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

//  stack class
struct myQueue
{

    Block *head = nullptr;
    Block *tail = nullptr;
    int sz = 0;

    // push method based on tail insert way
    void push(int val)
    {
        sz++;
        Block *newBlock = new Block(val);
        if (head == nullptr)
        {
            head = newBlock;
            tail = newBlock;
            return;
        }
        tail->next = newBlock;
        newBlock->prev = tail;
        tail = tail->next;
    }

    // pop method based on head deletion way
    void pop()
    {
        sz--;
        Block *deleteBlock = head;
        head = head->next;

        if (head == nullptr)
        {
            tail = nullptr;
            return;
        }
        else
        {
            head->prev = nullptr;
        }
        delete deleteBlock;
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
