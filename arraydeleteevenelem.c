/*Implement a menu driven program to create an
array with the following options a) delete a given element b) delete even
numbers.*/

#include <stdio.h>
void main()
{
    int i, n, c, p;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEntered array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    do
    {
        printf("\n\nEnter the option you want to perform:\n1.delete a given element\n2.delete even numbers\n3.exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nEnter the position of the Element that you want to delete: ");
            scanf("%d", &p);
            if (p >= n)
            {
                printf("Cannot Delete\n");
            }
            else
            {
                for (i = p; i < (n - 1); i++)
                {
                    a[i] = a[i + 1];
                }
            }
            printf("\nNew array : ");
            for (i = 0; i < n - 1; i++)
            {
                printf("%d\t", a[i]);
            }
            break;

        case 2:
            printf("New Array is\n");
            for (i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    a[i] = -1;
                }
                else
                {
                    printf("%d\t", a[i]);
                }
            }
            break;

        case 3:
            break;
        }
    } while (c != 3);
}
