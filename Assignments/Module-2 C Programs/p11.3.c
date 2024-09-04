// Looping programs:
// 7. WAP to print table up to given numbers

#include <stdio.h>

int main()
{
    int num, i, limit;

    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &num);

    printf("Enter the range (up to which number you want the table): ");
    scanf("%d", &limit);

    printf("Multiplication table for %d up to %d:\n", num, limit);

    for (i = 1; i <= limit; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
