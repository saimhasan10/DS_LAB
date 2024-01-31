#include <iostream>
using namespace std;

struct Node
{
    char v_name;
    Node *next;

    Node(char v_name)
    {
        this->v_name = v_name;
        this->next = nullptr;
    }
};

int main()
{
    int total_node;
    cout << "Enter the number of nodes:";
    cin >> total_node;

    Node *v_arr[total_node];

    // Input the names of the vertices
    cout << "Provide the vertices:";
    for (int i = 0; i < total_node; i++)
    {
        char temp;
        cin >> temp;
        v_arr[i] = new Node(temp);
    }

    // Input the edges to create the adjacency list
    cout << "provide edges between parent and child: ";
    for (int i = 0; i < total_node - 1; i++)
    {
        char parent, child;
        cin >> parent >> child;

        Node *parent_node = nullptr;
        Node *child_node = nullptr;

        for (int j = 0; j < total_node; j++)
        {
            if (v_arr[j]->v_name == parent)
                parent_node = v_arr[j];
            else if (v_arr[j]->v_name == child)
                child_node = v_arr[j];
        }

        // check vertex
        if (parent_node != nullptr && child_node != nullptr)
        {
            // add to the list
            Node *temp = new Node(child);
            temp->next = parent_node->next;
            parent_node->next = temp;
        }
        else
        {
            cout << "Error: Invalid edge input." << endl;
        }
    }
    for (int i = 0; i < total_node; i++)
    {
        cout << "Vertex " << v_arr[i]->v_name << " : ";
        Node *current = v_arr[i]->next;
        while (current != nullptr)
        {
            cout << current->v_name << " ";
            current = current->next;
        }
        cout << endl;
    }

    return 0;
}
