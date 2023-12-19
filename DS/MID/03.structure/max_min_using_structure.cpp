#include <bits/stdc++.h>
using namespace std;

// structure
struct Custom
{
    int max_value;
    int max_row;
    int max_col;
    int min_value;
    int min_row;
    int min_col;
};

// function to find the maximum and minimum values
Custom find_max_value(int **matrix, int row, int col)
{
    Custom custom;
    custom.max_value = matrix[0][0];
    custom.max_row = 0;
    custom.max_col = 0;

    // find max min
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // find max
            if (matrix[i][j] > custom.max_value)
            {
                custom.max_value = matrix[i][j];
                custom.max_row = i;
                custom.max_col = j;
            }
        }
    }
    return custom;
}

// find the minimum value
Custom find_min_value(int **matrix, int row, int col)
{
    Custom custom;
    custom.min_value = matrix[0][0];
    custom.min_row = 0;
    custom.min_col = 0;

    // find the minimum value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // find min
            if (matrix[i][j] < custom.min_value)
            {
                custom.min_value = matrix[i][j];
                custom.min_row = i;
                custom.min_col = j;
            }
        }
    }
    return custom;
}

int main()
{
    cout << "Enter the number of rows and columns: ";
    int row, col;
    cin >> row >> col;

    // create a pointer to a pointer
    int **matrix;
    // allocate memory memory fot the array of pointers(row)
    matrix = new int *[row];
    // for each row allocate memory for array of integers(column)
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << " " << j << ": ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    // print matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    Custom max_result = find_max_value(matrix, row, col);
    Custom min_result = find_min_value(matrix, row, col);

    cout << "Max value: " << max_result.max_value << " max value index: (" << max_result.max_row << "," << max_result.max_col << ")" << endl;

    cout << "Min value: " << min_result.min_value << " min value index: (" << min_result.min_row << "," << min_result.min_col << ")" << endl;

    return 0;
}
