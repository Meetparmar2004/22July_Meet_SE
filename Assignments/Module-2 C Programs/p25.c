// WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main()
{
    int a = 0, n;

    printf("Enter the maximum number of characters for the string:- ");
    scanf("%d", &n);

    char b[n];

    printf("Enter String :- ");
    getchar();
    fgets(b, n, stdin);

    while (b[a] != '\0')
    {
        a++;
    }

    printf("String lenght :- %d", a - 1);

    return 0;
}