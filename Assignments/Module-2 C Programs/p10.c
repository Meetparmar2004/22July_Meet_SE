// WAP to show
// 1. Monday to Sunday using switch case
// 2. Vowel or Consonant using switch case

#include <stdio.h>

int main()
{
    int a;

    // 1. Monday to Sunday using switch case

    printf("Enter any number ( 1 to 7 ):- ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Invalid input. Enter number : ( 1 to 7 ). \n");
        break;
    }

    // 2. Vowel or Consonant using switch case
    char b;

    printf("\nEnter V for Vowels :- \nEnter C for Consonants :- ");
    scanf(" %c", &b);

    switch (b)
    {
    case 'V':
    case 'v':
        printf("Vowels :- a, e, i, o, u \n");
        break;
    case 'C':
    case 'c':
        printf("Consonants :- b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z \n");
        break;

    default:
        printf("\nInvalid input. Enter V or C. ");
        break;
    }

    return 0;
}