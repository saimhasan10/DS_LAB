// union operation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int A[size1], B[size2];

    // first array input
    for (int i = 0; i < size1; i++)
    {
        cin >> A[i];
    }
    // second array input
    for (int i = 0; i < size2; i++)
    {
        cin >> B[i];
    }

    // union operation
    int union_size = size1 + size2;
    int union_array[union_size];

    // copy first array to union array
    for (int i = 0; i < size1; i++)
    {
        union_array[i] = A[i];
    }
    // initailize the new array size
    int union_new_index = size1;

    // main operation
    for (int i = 0; i < size2; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < union_new_index; j++)
        {
            if (union_array[j] == B[i])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate == false)
        {
            union_array[union_new_index] = B[i];
            union_new_index++;
        }
    }
    // print union array
    for (int i = 0; i < union_new_index; i++)
    {
        cout << union_array[i] << " ";
    }

    return 0;
}
