// Write a program of structure employee that provides the following information
// -print and display empno, empname, address and age

#include <stdio.h>

struct employee
{
    int empno, age;
    char empname[30], address[50];
};

int main()
{
    struct employee emp;

    printf("Enter Employee Number:- ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(emp.empname, sizeof emp.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(emp.address, sizeof emp.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &emp.age);

    printf("\n\nEmployee Number:- %d", emp.empno);
    printf("\nEmployee Name:- %s", emp.empname);
    printf("Employee Address:- %s", emp.address);
    printf("Employee Age:- %d", emp.age);

    return 0;
}