#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row1, col1, row2, col2;
    cout << "Enter first matrix row and column size for an square matrix: ";
    cin >> row1 >> col1;

    // Input first matrix
    int first_matrix[row1][col1];
    cout << " Input first_matrix: " << endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << i << " " << j << ": ";
            cin >> first_matrix[i][j];
        }
        cout << endl;
    }

    // Input second matrix
    cout << "Enter the second matrix row and column size for an square matrix: ";
    cin >> row2 >> col2;
    int second_matrix[row2][col2];
    cout << " Input first matrix: " << endl;

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << i << " " << j << ": ";
            cin >> second_matrix[i][j];
        }
        cout << endl;
    }

    cout << "First Matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << first_matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Second Matrix: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << second_matrix[i][j] << " ";
        }
        cout << endl;
    }

    // sum operation
    int sum_matrix[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            sum_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
        }
        cout << endl;
    }
    // print sum matrix
    cout << "Sum of two matrices: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << sum_matrix[i][j] << " ";
        }
        cout << endl;
    }
    // sub operation
    int sub_matrix[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            sub_matrix[i][j] = first_matrix[i][j] - second_matrix[i][j];
        }
        cout << endl;
    }
    // print sum matrix
    cout << "subtract of two matrices: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << sub_matrix[i][j] << " ";
        }
        cout << endl;
    }

    // transpose of the first matrix
    int transpose_matrix[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            transpose_matrix[i][j] = first_matrix[j][i];
        }
        cout << endl;
    }
    // print transpose matrix
    cout << "Transpose of first matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << transpose_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
