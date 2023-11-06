#include <bits/stdc++.h>
using namespace std;

// create a block
struct Block
{
    int data;
    Block *next = nullptr;
};

// display node value
void display(Block *temp)
{
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    // create 2 blocks and initialize them
    Block a, b;
    a.data = 10;
    b.data = 20;

    // print the data
    cout << "Print the data" << endl;
    cout << a.data << endl;
    cout << b.data << endl;

    // create head and links
    Block *head;
    head = &a;
    a.next = &b;

    // print the data using head
    cout << endl
         << "Print the data using head" << endl;
    cout << head->data << endl;
    cout << head->next->data << endl;

    // modify data without using their name
    head->data = 100;
    head->next->data = 200;

    // print the data using head after modification
    cout << endl
         << "Print the data using head after modification" << endl;
    cout << head->data << endl;
    cout << head->next->data << endl;

    // print using function
    cout << endl
         << "Print using function" << endl;
    display(head);

    return 0;
}
