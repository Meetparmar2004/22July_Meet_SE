// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Enter 2 numbers:- ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /):- ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("Addition : A + B = %d", a + b);
        break;
    case '-':
        printf("Subtraction : A - B = %d", a - b);
        break;
    case '*':
        printf("Multiplication : A * B = %d", a * b);
        break;
    case '/':
        printf("Division : A / B = %d", a / b);
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}