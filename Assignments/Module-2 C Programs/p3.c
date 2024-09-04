// WAP to find area of circle, rectangle and triangle

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
    // Area of Circle
    float radius, C_area;
    printf("Enter radius of the Circle :- ");
    scanf("%f", &radius);

    C_area = pi * radius * radius;
    printf("Area of Circle is:- %f", C_area);

    // Area of Rectangle
    int width, R_height, R_area;
    printf("\n\nEnter Width and Height of the Rectangle :- ");
    scanf("%d %d", &width, &R_height);

    R_area = width * R_height;
    printf("Area of Rectangle is:- %d", R_area);

    // Area of Triangle
    int T_height, base, T_area;
    printf("\n\nEnter Height and Base of the Triangle :- ");
    scanf("%d %d", &T_height, &base);

    T_area = base * T_height / 2;
    printf("Area of Triangle is:- %d", T_area);

    return 0;
}