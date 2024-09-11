// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

int main()
{
    int n, max;

    printf("Enter the number of elements:- ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:- ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }

    printf("The maximum value is %d\n", max);

    return 0;
}