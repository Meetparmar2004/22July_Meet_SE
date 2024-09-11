// Write a program make a summation of given number (E.g., 1523 Ans: 11)

#include <stdio.h>

int main()
{
    int num, r, sum = 0;

    printf("Enter a number :- ");
    scanf("%d", &num);

    while (num != 0)
    {
        r = num % 10;
        sum += r;
        num /= 10;
    }

    printf("Sum of number :- %d", sum);
    return 0;
}