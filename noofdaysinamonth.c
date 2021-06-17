#include <stdio.h>
void main()
{
    int m;
    printf("Enter the Month: \n1.Jan\n 2.Feb\n 3.Mar\n 4.Apr\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n ");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("The number of days in January is 31");
        break;
    case 2:
        printf("The number of days in February is 28 or 29");
        break;
    case 3:
        printf("The number of days in March is 31");
        break;
    case 4:
        printf("The number of days in April is 30");
        break;
    case 5:
        printf("The number of days in May is 31");
        break;
    case 6:
        printf("The number of days in June is 30");
        break;
    case 7:
        printf("The number of days in July is 31");
        break;
    case 8:
        printf("The number of days in August is 31");
        break;
    case 9:
        printf("The number of days in September is 30");
        break;
    case 10:
        printf("The number of days in October is 31");
        break;
    case 11:
        printf("The number of days in November is 30");
        break;
    case 12:
        printf("The number of days in December is 31");
        break;
    default:
        printf("Invalid Choice!!");
        break;
    }
}
