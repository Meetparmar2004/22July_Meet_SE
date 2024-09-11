// Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>

int main()
{
    int n, num = 1;

    printf("Enter nummber of Rows :- ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("%d  ", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}