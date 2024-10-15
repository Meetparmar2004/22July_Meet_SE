// WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calc
{
public:
    float a, b;

    void getdata()
    {
        cout << "Enter value of A : ";
        cin >> a;
        cout << "Enter value of B : ";
        cin >> b;
    }
    void printdata()
    {
        cout << "\nAddition : " << a + b;
        cout << "\nSubtraction : " << a - b;
        cout << "\nMultiplication : " << a * b;
        cout << "\nDivision : " << a / b;
    }
};

int main()
{
    calc c;
    c.getdata();
    c.printdata();
}