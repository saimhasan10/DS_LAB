#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column for an square matrix: ";
    cin >> row >> col;
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    int primary_diagonal_sum = 0;
    cout << "Primary diagonal elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Primary diagonal sum: " << primary_diagonal_sum << endl
         << endl;

    // secondary diagonal
    int secondary_diagonal_sum = 0;
    cout << "Secondary diagonal elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                secondary_diagonal_sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Secondary diagonal sum: " << secondary_diagonal_sum << endl;

    return 0;
}
