// Pattern
// A
// B C
// D E F
// G H I J
// K L M N O

#include <stdio.h>

int main()
{
    int n, a = 'A';

    printf("Enter nummber of Rows :- ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("%c ", a);
                a++;
            }
        }
        printf("\n");
    }

    return 0;
}