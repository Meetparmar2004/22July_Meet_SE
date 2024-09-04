// WAP to print factorial of given number

#include <stdio.h>

int main()
{
    int a, factorial = 1;
    printf("Enter any number :- ");
    scanf("%d", &a);

    while (a > 0)
    {
        factorial *= a;
        a--;
    }

    printf("Factorial of given number:- %d", factorial);

    return 0;
}