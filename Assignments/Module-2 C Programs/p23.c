// WAP to take two Array input from user and sort them in ascending or descending order as per user's choice

#include <stdio.h>

int main()
{
    int n, s;

    printf("Enter number of elements :- ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter value of A : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value :- ");
        scanf("%d", &a[i]);
    }

    printf("\nEnter value of B : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value :- ");
        scanf("%d", &b[i]);
    }

    printf("\nFor Ascending order type: 1\nFor Decending order type: 2\nYour Choice :- ");
    scanf("%d", &s);

    // Ascending order
    if (s == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    b[i] = b[i] + b[j];
                    b[j] = b[i] - b[j];
                    b[i] = b[i] - b[j];
                }
            }
        }
        printf("\nAfter sort A : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nAfter sort B : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
    }

    // Decending order
    else if (s == 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    b[i] = b[i] + b[j];
                    b[j] = b[i] - b[j];
                    b[i] = b[i] - b[j];
                }
            }
        }

        printf("\nAfter sort A : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nAfter sort B : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}