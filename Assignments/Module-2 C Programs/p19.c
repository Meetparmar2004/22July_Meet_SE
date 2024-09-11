// Write a program to find out the max number from given array using function

#include <stdio.h>

int max_num(int array[], int n)
{
    int max = array[0];

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int max, n;

    printf("Enter the number of elements:- ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d numbers :- ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    max = max_num(array, n);
    printf("Max value in array is :- %d", max);

    return 0;
}