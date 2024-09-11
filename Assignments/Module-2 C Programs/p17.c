// Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans:- 5)

#include <stdio.h>

int main()
{
    int r, num, sum = 0;

    printf("Enter a number:- ");
    scanf("%d", &num);

    if (num < 10)
    {
        goto end;
    }

    sum = num % 10;
end:
    while (num != 0)
    {
        r = num % 10;
        num /= 10;
    }

    sum += r;
    printf("Sum of First and Last digit :- %d", sum);
    return 0;
}