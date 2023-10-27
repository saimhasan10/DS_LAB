// intersection operation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2;
    // array size
    cin >> size1 >> size2;
    int A[size1], B[size1];
    // fist array input
    for (int i = 0; i < size1; i++)
    {
        cin >> A[i];
    }
    // second array input
    for (int i = 0; i < size2; i++)
    {
        cin >> B[i];
    }

    int intersection_array_size = min(size1, size2);
    // intersection_array
    int intersection_array[intersection_array_size];
    int intersection_index = 0;

    // intersection operation
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (A[i] == B[j])
            {
                intersection_array[intersection_index] = A[i];
                intersection_index++;
                break;
            }
        }
    }
    for (int i = 0; i < intersection_index; i++)
    {
        cout << intersection_array[i] << " ";
    }
    return 0;
}
