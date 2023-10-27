#include<bits/stdc++.h>
using namespace std;

struct Student
{
    char name[50];
    string ID;
    int age;
    float CGPA;
};

void singleVariable()
{
    Student s1;

    cout<<endl<<"Enter the details of the student: "<<endl;
    cout<<"Name: ";
    cin.get(s1.name, sizeof(s1.name), '\n');
    getchar();
    cout<<"ID: ";
    getline(cin, s1.ID);
    cout<<"Age: ";
    cin>>s1.age;
    cout<<"CGPA: ";
    cin>>s1.CGPA;

    cout<<endl<<"Details:"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"ID: "<<s1.ID<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"CGPA: "<<s1.CGPA<<endl;
}

void arrayVariable1D()
{
    int n = 3;
    Student s[n];

    for(int i=0; i<n; i+=1)
    {
        getchar();

        cout<<endl<<"Enter the details of the student "<<i+1<<":"<<endl;
        cout<<"Name: ";
        cin.get(s[i].name, sizeof(s[i].name), '\n');
        getchar();
        cout<<"ID: ";
        getline(cin, s[i].ID);
        cout<<"Age: ";
        cin>>s[i].age;
        cout<<"CGPA: ";
        cin>>s[i].CGPA;
    }


    for(int i=0; i<n; i+=1)
    {
        cout<<endl<<"Details of student "<<i+1<<":"<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"ID: "<<s[i].ID<<endl;
        cout<<"Age: "<<s[i].age<<endl;
        cout<<"CGPA: "<<s[i].CGPA<<endl;
    }
}

void arrayVariable2D()
{
    int row = 2, col = 3;
    Student s[row][col];

    for(int i=0; i<row; i+=1)
    {
        for(int j=0; j<col; j+=1)
        {
            getchar();

            cout<<endl<<"Enter the details of the student "<<i*col+j+1<<":"<<endl;
            cout<<"Name: ";
            cin.get(s[i][j].name, sizeof(s[i][j].name), '\n');
            getchar();
            cout<<"ID: ";
            getline(cin, s[i][j].ID);
            cout<<"Age: ";
            cin>>s[i][j].age;
            cout<<"CGPA: ";
            cin>>s[i][j].CGPA;
        }
    }


    for(int i=0; i<row; i+=1)
    {
        for(int j=0; j<col; j+=1)
        {
            cout<<endl<<"Details of student "<<i*col+j+1<<":"<<endl;
            cout<<"Name: "<<s[i][j].name<<endl;
            cout<<"ID: "<<s[i][j].ID<<endl;
            cout<<"Age: "<<s[i][j].age<<endl;
            cout<<"CGPA: "<<s[i][j].CGPA<<endl;
        }
    }
}

int main()
{
    Student s1, s[3];

    cout<<"### For single variable ###"<<endl;
    singleVariable();

    cout<<endl<<"### For 1D array variable ###"<<endl;
    arrayVariable1D();

    cout<<endl<<"### For 2D array variable ###"<<endl;
    arrayVariable2D();

    return 0;
}
