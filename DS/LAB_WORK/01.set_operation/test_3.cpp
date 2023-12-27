#include <iostream>
#include <set>
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

    set<int> union_set; // Use a set to store unique elements

    // Copy elements from array 'a' to 'union_set' (no duplicates will be added)
    for (int i = 0; i < size1; i++)
    {
        union_set.insert(a[i]);
    }

    // Copy elements from array 'b' to 'union_set' (no duplicates will be added)
    for (int i = 0; i < size2; i++)
    {
        union_set.insert(b[i]);
    }

    // Print union set
    for (int num : union_set)
    {
        cout << num << " ";
    }

    return 0;
}
