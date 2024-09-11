// Pattern
// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{
    int n;
    char a;

    printf("Enter nummber of Rows :- ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        a = 'A';
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