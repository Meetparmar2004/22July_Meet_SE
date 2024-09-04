// WAP to convert years into days and days into years

#include <stdio.h>

int main()
{
    int days, years;
    int Year, Day;

    // Days into Years
    printf("Enter Days to convert into Year:- ");
    scanf("%d", &days);

    Year = days / 365;
    printf("Converted Days into Years = %d", Year);

    // Years into Days
    printf("\n\nEnter Years to convert into Days:- ");
    scanf("%d", &years);

    Day = years * 365;
    printf("Converted Years into Days = %d", Day);

    return 0;
}