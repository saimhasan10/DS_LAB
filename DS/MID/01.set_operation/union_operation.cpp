#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2;
    cin >> size1 >> size2;

    int a[size1], b[size2];

    for (int i = 0; i < size1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        cin >> b[i];
    }

    // Union operations
    int union_size = size1 + size2;
    int union_set[union_size];

    // Copy elements from array 'a' to 'union_set'
    for (int i = 0; i < size1; i++)
    {
        union_set[i] = a[i];
    }

    int union_index = size1;

    // Check and copy elements from array 'b' to 'union_set' if they are not already present
    for (int i = 0; i < size2; i++)
    {
        bool isDuplicate = false;

        // Check if 'b[i]' is already in 'union_set'
        for (int j = 0; j < union_index; j++)
        {
            if (union_set[j] == b[i])
            {
                isDuplicate = true;
                break;
            }
        }

        // If 'b[i]' is not in 'union_set', add it
        if (!isDuplicate) // if false then
        {
            union_set[union_index] = b[i];
            union_index++;
        }
    }

    // Print union set
    for (int i = 0; i < union_index; i++)
    {
        cout << union_set[i] << " ";
    }

    return 0;
}
