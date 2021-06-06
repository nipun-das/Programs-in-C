/*Finding roots of Quadratic Equation*/

#include <stdio.h>
#include <math.h>
int main()
{
    float i, a, b, c, D, root, root1, root2, real, img;
    char choice='y';
    do
    {
        printf("Enter the coefficient of a: ");
        scanf("%f", &a);
        printf("Enter the coefficient of b: ");
        scanf("%f", &b);
        printf("Enter the coefficient of c: ");
        scanf("%f", &c);
        D = (b * b) - 4 * a * c;
        if (D == 0)
        {
            root = (-b) / (2 * a);
            printf("Root is %f", root);
            printf("\nRoots are real and equal\n");
        }
        else if (D > 0)
        {
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);
            printf("Roots are %f and %f", root1, root2);
            printf("\nRoots are real and different");
        }
        else
        {
            real = (-b) / (2 * a);
            img = sqrt(-D) / (2 * a);
            printf("Roots are %.2f+%.2fi AND %.2f-%.2fi", real, img, real, img);
            printf("\nRoots are imaginary and different");
        }
        printf("\nWant to calculate roots one more time?(Y/N): ");
        scanf(" %c",&choice);

    } while(choice=='y');
    
}