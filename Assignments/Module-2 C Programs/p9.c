// WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number :- ");
    scanf("%d", &num);

    printf("Given number %d is %s ", num, (num % 2 == 0 ? "even" : "odd"));
    return 0;
}