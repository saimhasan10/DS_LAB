#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the size of row and col: ";
    int row, col;
    cin >> row >> col;
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << " " << j << ": ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    // maximum
    int max_value = INT_MIN;
    int max_index_i, max_index_j;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] > max_value)
            {
                max_value = matrix[i][j];
                max_index_i = i;
                max_index_j = j;
            }
        }
    }
    cout << "Maximum value: " << max_value << endl;
    cout << "Maximum value Index: (" << max_index_i << ", " << max_index_j << ")" << endl
         << endl;

    // Minimum
    int min_value = INT_MAX;
    int min_index_i, min_index_j;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] < min_value)
            {
                min_value = matrix[i][j];
                min_index_i = i;
                min_index_j = j;
            }
        }
    }
    cout << "Minimum value: " << min_value << endl;
    cout << "Minimum value Index: (" << min_index_i << ", " << min_index_j << ")" << endl;

    return 0;
}
