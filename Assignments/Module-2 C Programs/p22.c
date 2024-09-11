// WAP to find factorial using recursion

#include <stdio.h>

int factorial(int i)
{
    if (i > 0)
    {
        return i * factorial(i - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a;

    printf("Enter number:- ");
    scanf("%d", &a);

    printf("%d", factorial(a));
    return 0;
}