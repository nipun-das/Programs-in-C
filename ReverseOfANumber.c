/*Reverse of a Number*/


#include <stdio.h>
int main()
{
    int n, rev = 0, r;
    printf("Enter the Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;  /*When divided by 10, remainder gives the last digit of the input number*/
        rev = rev * 10 + r;   /*stores the digit in rev)*/
        n = n / 10;  /*Quotient gives the remaining digits to the left of last digit and then the loop..*/
    }
    printf("The reverse of %d is %d", n, rev);

    return 0;
}

