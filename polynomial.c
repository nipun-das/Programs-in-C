/*Experiment 1.A
C C Nipun Das
VML20CS066*/

#include <stdio.h>
#include <math.h>

struct polynomial
{
    int exp;
    float coeff;
} a[10], b[10], c[10];

void main()
{
    int d1, d2, i, k = 0, l = 0, m = 0;
    printf("Enter the highest degree of the first polynomial : ");
    scanf("%d", &d1);
    for (i = 0; i <= d1; i++)
    {
        printf("\nEnter the coefficient of x^%d : ", i);
        scanf("%f", &a[i].coeff);
        a[k++].exp = i;
    }
    printf("Enter the highest degree of the second polynomial : ");
    scanf("%d", &d2);
    for (i = 0; i <= d2; i++)
    {
        printf("\nEnter the coefficient of x^%d : ", i);
        scanf("%f", &b[i].coeff);
        b[l++].exp = i;
    }
    printf("\nFirst polynomial = ");
    for (i = d1; i >= 1; i--)
    {
        printf("%0.1fx^%d + ", a[i].coeff, a[i].exp);
    }
    printf("%0.1f", a[0].coeff);
    printf("\n");
    printf("\nSecond polynomial = ");
    for (i = d2; i >= 1; i--)
    {
        printf("%0.1fx^%d + ", b[i].coeff, b[i].exp);
    }
    printf("%0.1f", b[0].coeff);
    printf("\n");
    if (d1 > d2)
    {
        for (i = 0; i <= d2; i++)
        {
            c[m].coeff = a[i].coeff + b[i].coeff;
            c[m].exp = a[i].exp;
            m++;
        }
        for (i = d2 + 1; i <= d1; i++)
        {
            c[m].coeff = a[i].coeff;
            c[m].exp = a[i].exp;
            m++;
        }
    }
    else
    {
        for (i = 0; i <= d1; i++)
        {
            c[m].coeff = a[i].coeff + b[i].coeff;
            c[m].exp = a[i].exp;
            m++;
        }
        for (i = d1 + 1; i <= d2; i++)
        {
            c[m].coeff = b[i].coeff;
            c[m].exp = b[i].exp;
            m++;
        }
    }
    printf("\nPolynomial sum = ");
    for (i = m - 1; i >= 1; i--)
    {
        printf("%0.1fx^%d + ", c[i].coeff, c[i].exp);
    }
    printf("%0.1f", c[0].coeff);
}

/*OUTPUT:
Enter the highest degree of the first polynomial : 3
Enter the coefficient of x^0 : 1
Enter the coefficient of x^1 : 2
Enter the coefficient of x^2 : 3
Enter the coefficient of x^3 : 4
Enter the highest degree of the second polynomial : 4
Enter the coefficient of x^0 : 1
Enter the coefficient of x^1 : 2
Enter the coefficient of x^2 : 3
Enter the coefficient of x^3 : 6
Enter the coefficient of x^4 : 5
First polynomial = 4.0x^3 + 3.0x^2 + 2.0x^1 + 1.0
Second polynomial = 5.0x^4 + 6.0x^3 + 3.0x^2 + 2.0x^1 + 1.0
Polynomial sum = 5.0x^4 + 10.0x^3 + 6.0x^2 + 4.0x^1 + 2.0
*/