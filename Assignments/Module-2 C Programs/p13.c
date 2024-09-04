// WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number :- ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number\n");
        printf("Enter a number greater than 0\n");
        return 1;
    }

    int F[n];

    if (n == 1)
    {
        F[0] = 0;
        printf("%d\n", F[0]);
    }
    else
    {
        F[0] = 0;
        F[1] = 1;

        printf("%d %d", F[0], F[1]);

        for (int i = 2; i < n; i++)
        {
            F[i] = F[i - 1] + F[i - 2];
            printf(" %d", F[i]);
        }
        printf("\n");
    }

    return 0;
}