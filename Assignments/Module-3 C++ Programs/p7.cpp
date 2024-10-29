// Create a class person having members name and age.
// Derive a class student having member percentage.
// Derive another class teacher having member salary.
// Write necessary member function to initialize, read and write data. Write also Main function
// (Multiple Inheritance)

#include <iostream>
using namespace std;

class person
{
public:
    int age;
    string name;

    void getp()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }
};

class student
{
public:
    float pr, ag;
    string nm;
    void getst()
    {
        cout << "Enter name : ";
        cin >> nm;
        cout << "Enter age : ";
        cin >> ag;
        cout << "Enter percentage : ";
        cin >> pr;
    }
};

class teacher
{
public:
    int salary, a;

    string n;

    void gett()
    {
        cout << "Enter name : ";
        cin >> n;
        cout << "Enter age : ";
        cin >> a;
        cout << "Enter salary : ";
        cin >> salary;
    }
};

class result : public person, public student, public teacher
{
public:
    void printdata()
    {
        cout << "\n------Person Details--------";
        cout << "\nName : " << name;
        cout << "\nAge : " << age;
    }
    void prints()
    {
        cout << "\n\n------Student Details--------";
        cout << "\nName : " << nm;
        cout << "\nAge : " << ag;
        cout << "\nPercentage : " << pr << "%";
    }
    void printt()
    {
        cout << "\n\n------Teacher Details--------";
        cout << "\nName : " << n;
        cout << "\nAge : " << a;
        cout << "\nSalary : Rs." << salary << " \n";
    }
};

int main()
{
    result r;
    cout << "Enter details for Person :\n";
    r.getp();
    cout << "Enter details for Student :\n";
    r.getst();
    cout << "Enter details for Teacher : \n";
    r.gett();

    r.printdata();
    r.prints();
    r.printt();
}