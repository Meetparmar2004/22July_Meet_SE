// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

int main()
{
    int r1, c1;
    int r2, c2;

    printf("Enter number of row and column of Matrix A :- ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of row and column of Matrix B :- ");
    scanf("%d %d", &r2, &c2);

    int a[r1][c1];
    int b[r2][c2];
    int sum[r1][c1];

    // Multiplication of two matrix
    if (c1 == r2)
    {
        printf("Enter value of Mateix A : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter value :- ");
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter value of Mateix B : \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter value :- ");
                scanf("%d", &b[i][j]);
            }
        }

        int sum[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                sum[i][j] = 0;
            }
        }

        printf("Multiplication : ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    sum[i][j] += (a[i][k] * b[k][j]);
                }
            }
            printf("\n");
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d  ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nFor Multiplication of matrix \nNumber of columns in the first matrix must be equal to the number of rows in the second matrix");
    }

    return 0;
}