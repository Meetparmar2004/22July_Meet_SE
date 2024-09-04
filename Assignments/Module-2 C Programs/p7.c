// WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)

#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Enter two numbers :- ");
    scanf("%d %d", &a, &b);

    printf("Enter any operator ( +, -, *, /, %% ) to perform operation :- ");
    scanf(" %c", &c);

    if (c == '+')
    {
        printf("Addition : A + B = %d", a + b);
    }
    else if (c == '-')
    {
        printf("Subtraction : A - B = %d", a - b);
    }
    else if (c == '*')
    {
        printf("Multiplication : A * B = %d", a * b);
    }
    else if (c == '/')
    {
        printf("Division : A / B = %d", a / b);
    }
    else if (c == '%')
    {
        printf("modulo : A %% B = %d", a % b);
    }
    else
    {
        printf("Invalid Operator");
    }

    return 0;
}