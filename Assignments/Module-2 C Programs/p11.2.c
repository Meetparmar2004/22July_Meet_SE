// Looping programs:
// 2. WAP to take 10 no. Input from user and find out …
// 3. How many Even numbers are there
// 4. How many odd numbers are there
// 5. Sum of even numbers
// 6. Sum of odd numbers

#include <stdio.h>

int main()
{
    int num[10];
    int even = 0, odd = 0, sum_e = 0, sum_o = 0;

    printf("Enter any 10 numbers :- ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        if (num[j] % 2 == 0)
        {
            even += 1;
            sum_e += num[j];
        }
        else
        {
            odd += 1;
            sum_o += num[j];
        }
    }

    printf("\nTotal Odd numbers :- %d", odd);
    printf("\nSum of Odd numbers :- %d", sum_o);
    printf("\n\nTotal Even numbers :- %d", even);
    printf("\nSum of Even numbers :- %d\n", sum_e);

    return 0;
}