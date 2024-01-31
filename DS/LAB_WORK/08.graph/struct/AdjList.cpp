// teacher's draft
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
    int total_vertex, total_edges;
    cout << "Enter the number of nodes:";
    cin >> total_vertex;
    cout << "Enter the number of edges:";
    cin >> total_edges;

    Node *v_arr[total_vertex];

    // Input the names of the vertices
    cout << "Provide the vertices:";
    for (int i = 0; i < total_vertex; i++)
    {
        char temp;
        cin >> temp;
        v_arr[i] = new Node(temp);
    }

    // Input the edges to create the adjacency list
    cout << "provide edges between source vertex and destination vertex: ";
    for (int e = 1; e <= total_edges; e++)
    {
        char srcVertex, dstVertex;
        cin >> srcVertex >> dstVertex;

        Node *temp = nullptr;

        for (int v = 0; v < total_vertex; v++)
        {
            if (v_arr[v]->v_name == srcVertex)
            {
                temp = v_arr[v];
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = new Node(dstVertex);
                break;
            }
        }
    }

    for (int i = 0; i < total_vertex; i++)
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
