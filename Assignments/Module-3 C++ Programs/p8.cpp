// Assume that the test results of a batch of students are stored in three different classes.
// Class Students are storing the roll number.
// Class Test stores the marks obtained in two subjects.
// class result contains the total marks obtained in the test.
// The class result can inherit the details of the marks obtained in the test and roll number of students.
// (Multilevel Inheritance)

#include <iostream>
using namespace std;

class student
{
public:
    string nm;
    int rnum;
    void getst()
    {
        cout << "Enter Name : ";
        cin >> nm;
        cout << "Enter Roll Number : ";
        cin >> rnum;
    }
};

class test : public student
{
public:
    int m1, m2, tm;

    void gett()
    {
        cout << "Enter Marks of Maths : ";
        cin >> m1;
        cout << "Enter Marks of Science : ";
        cin >> m2;
        tm = m1 + m2;
    }
};

class result : public test
{
public:
    void printdata()
    {
        cout << "\nName : " << nm;
        cout << "\nRoll number  : " << rnum;
        cout << "\nMarks of Maths : " << m1;
        cout << "\nMarks of Science : " << m2;
        cout << "\nTotal Marks : " << tm;
    }
};

int main()
{
    result r;
    r.getst();
    r.gett();
    r.printdata();
}