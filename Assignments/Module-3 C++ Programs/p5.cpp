// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class calc
{
public:
    float a, b;
    calc()
    {
        cout << "Enter value of A : ";
        cin >> a;
        cout << "Enter value of B : ";
        cin >> b;

        cout << "\nAddition : " << a + b;
        cout << "\nSubtraction : " << a - b;
        cout << "\nMultiplication : " << a * b;
        cout << "\nDivision : " << a / b;
    }
};

int main()
{
    calc c;
}