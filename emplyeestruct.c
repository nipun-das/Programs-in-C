//Implement a program to read and print data of n employees (Name, Employee Id and Salary) using structure.

#include <stdio.h>
struct employee
{
    char name[30];
    int id;
    float salary;

} emp[20];
void main()
{

    int n, i;
    printf("\nEnter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Employee Name: ");
        scanf("%s", emp[i].name);
        printf("\nEnter the Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("\nEnter the employee salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEmployee DETAILS:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee Name - %s", emp[i].name);
        printf("\nEmployee ID - %d", emp[i].id);
        printf("\nEmployee Salary - %f", emp[i].salary);
        printf("\n");
    }
}