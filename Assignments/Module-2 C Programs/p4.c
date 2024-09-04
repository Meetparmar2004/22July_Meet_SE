// WAP to find simple interest

#include <stdio.h>

int main()
{
    float si, principal, rate, time;

    printf("Enter Principal ammount :- ");
    scanf("%f", &principal);
    printf("Enter annual interest rate ( in percentage ):- ");
    scanf("%f", &rate);
    printf("Enter Time ( in Years ) :- ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    printf("\nSimple Interest is :- %f", si);

    return 0;
}