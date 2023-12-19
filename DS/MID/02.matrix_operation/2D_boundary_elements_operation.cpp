#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column for an square matrix: ";
    cin >> row >> col;
    int matrix[row][col];
    // input matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else if (i == row - 1)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else if (j == 0)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else if (j == col - 1)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Sum of boundary elements: " << sum << endl;
    return 0;
}
