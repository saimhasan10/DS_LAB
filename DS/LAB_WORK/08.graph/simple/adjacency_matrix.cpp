// simple graph representation (matrix)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    int adj[node + 1][node + 1];

    // initialize self connection and no connections
    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            if (i == j)
            {
                adj[i][j] = 1;
            }
            else
                adj[i][j] = 0;
        }
    }
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {

            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
