// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a and b :- ");
    scanf("%d %d", &a, &b);

    printf("\nAddition of a and b = %d", a + b);
    printf("\nSubtraction of a and b = %d", a - b);
    printf("\nMultiplication of a and b = %d", a * b);
    printf("\nDivision of a and b = %d", a / b);
    printf("\nModulo of a and b = %d", a % b);

    return 0;
}