// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main()
{
    int num, rev = 0, r;

    printf("Enter a Number :- ");
    scanf("%d", &num);

    while (num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }

    printf("Reverse number :- %d", rev);
    return 0;
}