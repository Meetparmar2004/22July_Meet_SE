// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverse(char a[], int i, int j)
{
    if (i >= j)
    {
        return;
    }

    char temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    reverse(a, i + 1, j - 1);
}
int main()
{
    int n, length;

    printf("Enter the maximum number of characters for the string:- ");
    scanf("%d", &n);

    char a[n];

    printf("Enter String :- ");
    getchar();
    fgets(a, n, stdin);

    length = strlen(a);

    reverse(a, 0, length - 2);

    printf("Reverse String = %s", a);
    return 0;
}