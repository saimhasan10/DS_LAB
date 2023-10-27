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

    // Find the intersection elements and store them in a new array

    // Intersection size
    int intersection_size = min(size1, size2);

    int intersection[intersection_size];
    int intersection_index = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                intersection[intersection_index] = a[i];
                intersection_index++;
                break; // Break to avoid duplicate entries in the intersection array
            }
        }
    }

    // Print intersection set

    for (int i = 0; i < intersection_index; i++)
    {
        cout << intersection[i] << " ";
    }

    return 0;
}
