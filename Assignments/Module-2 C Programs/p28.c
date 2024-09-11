// Write a program of structure for five employee that provides the following information
// -print and display empno, empname, address and age

#include <stdio.h>

struct employee
{
    int empno, age;
    char empname[30], address[50];
};

int main()
{
    struct employee e1, e2, e3, e4, e5;

    printf("--------------------------------------------------\n");

    printf("Employee 1:\n");
    printf("Enter Employee Number:- ");
    scanf("%d", &e1.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(e1.empname, sizeof e1.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(e1.address, sizeof e1.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &e1.age);
    printf("--------------------------------------------------\n");

    printf("Employee 2:\n");
    printf("Enter Employee Number:- ");
    scanf("%d", &e2.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(e2.empname, sizeof e2.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(e2.address, sizeof e2.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &e2.age);
    printf("--------------------------------------------------\n");

    printf("Employee 3:\n");
    printf("Enter Employee Number:- ");
    scanf("%d", &e3.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(e3.empname, sizeof e3.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(e3.address, sizeof e3.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &e3.age);
    printf("--------------------------------------------------\n");

    printf("Employee 4:\n");
    printf("Enter Employee Number:- ");
    scanf("%d", &e4.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(e4.empname, sizeof e4.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(e4.address, sizeof e4.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &e4.age);
    printf("--------------------------------------------------\n");

    printf("Employee 5:\n");
    printf("Enter Employee Number:- ");
    scanf("%d", &e5.empno);
    printf("Enter Employee Name:- ");
    getchar();
    fgets(e5.empname, sizeof e5.empname, stdin);
    printf("Enter Employee Address:- ");
    fgets(e5.address, sizeof e5.address, stdin);
    printf("Enter Employee Age:- ");
    scanf("%d", &e5.age);

    printf("==================================================\n\n");

    printf("Employee 1 Detail:- \n");
    printf("\n%d", e1.empno);
    printf("\n%s", e1.empname);
    printf("\n%s", e1.address);
    printf("\n%d", e1.age);
    printf("--------------------------------------------------\n");

    printf("Employee 2 Detail:- \n");
    printf("\n%d", e2.empno);
    printf("\n%s", e2.empname);
    printf("\n%s", e2.address);
    printf("\n%d", e2.age);
    printf("--------------------------------------------------\n");

    printf("Employee 3 Detail:- \n");
    printf("\n%d", e3.empno);
    printf("\n%s", e3.empname);
    printf("\n%s", e3.address);
    printf("\n%d", e3.age);
    printf("--------------------------------------------------\n");

    printf("Employee 4 Detail:- \n");
    printf("\n%d", e4.empno);
    printf("\n%s", e4.empname);
    printf("\n%s", e4.address);
    printf("\n%d", e4.age);
    printf("--------------------------------------------------\n");

    printf("Employee 5 Detail:- \n");
    printf("\n%d", e5.empno);
    printf("\n%s", e5.empname);
    printf("\n%s", e5.address);
    printf("\n%d", e5.age);
    printf("--------------------------------------------------\n");

    return 0;
}