// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int x)
{
    return x * x * x;
}

int main()
{
    int num1, num2;
    int c1;

    cout << "Enter two numbers to multiply : ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is : " << multiply(num1, num2) << endl;

    cout << "\nEnter a number to find its cube : ";
    cin >> c1;

    cout << "Cube of " << c1 << " is: " << cube(c1) << endl;

    return 0;
}