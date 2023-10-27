#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int id;
    int age;
    float cgpa;
};

// function to find the hightest  CGPA between them
Student find_high_cgpa_student(Student **student_data, int row, int col)
{
    float high_cgpa = 0.0;
    Student high_cgpa_student;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (student_data[i][j].cgpa > high_cgpa)
            {
                high_cgpa = student_data[i][j].cgpa;
                high_cgpa_student = student_data[i][j];
            }
        }
    }
    return high_cgpa_student;
}

int main()
{
    cout << "Enter the number of rows and col : ";
    int row, col;
    cin >> row >> col;

    // 2d array of students structures
    Student **student_data = new Student *[row];
    for (int i = 0; i < row; i++)
    {
        student_data[i] = new Student[col];
    }

    // input for each student
    for (int i = 0; i < row; i++)
    {
        cin.ignore();
        for (int j = 0; j < col; j++)
        {
            cout << " Student Name: [" << i << "][" << j << "]: ";
            cin.ignore();
            getline(cin, student_data[i][j].name);

            cout << " Student ID: [" << i << "][" << j << "]: ";
            cin >> student_data[i][j].id;
            cin.ignore();

            cout << " Student CGPA: [" << i << "][" << j << "]: ";
            cin >> student_data[i][j].cgpa;

            cout << " Student Age: [" << i << "][" << j << "]: ";
            cin >> student_data[i][j].age;
            // cin.ignore();
        }
        cout << endl;
    }

    Student high_cgpa_student = find_high_cgpa_student(student_data, row, col);

    cout << "The highest CGPA holder is: " << high_cgpa_student.name << ", id: " << high_cgpa_student.id << " and his CGPA is: " << high_cgpa_student.cgpa << endl;

    return 0;
}
