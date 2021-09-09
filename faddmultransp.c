#include <stdio.h>

void read_matrix(int[][5], int, int);
void sum_matrix(int[][5], int[][5], int, int);
void multi_matrix(int[][5], int[][5], int, int, int);
void transp_matrix(int[][5], int, int);
void display_matrix(int[][5], int, int);
int i, j, k;
int main()
{
    int num, A[5][5], B[5][5], m, n, p, q;
    do
    {
        printf("\n1. Matrix addition\n2. Matrix Multiplication\n3. Transpose of a Matrix\n4. Exit\nEnter which operation you want to perform (1,2,3,4) : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("Enter the no. of rows and columns of Matrix 1:\n");
            scanf("%d %d", &m, &n);
            printf("Enter the no. of rows and columns of Matrix 2:\n");
            scanf("%d %d", &p, &q);
            printf("Enter the elements of the Matrix 1 : \n");
            read_matrix(A, m, n);
            printf("Enter the elements of the Matrix 2 : \n");
            read_matrix(B, p, q);
            printf("The Matrices are:\n");
            printf("Matrix 1:\n");
            display_matrix(A, m, n);
            printf("\n");
            printf("Matrix 2:\n");
            display_matrix(B, p, q);
            if (m == p && n == q)
            {
                sum_matrix(A, B, m, n);
            }
            else
            {
                printf("The matrices cannot be added\n");
            }
            break;

        case 2:
            printf("Enter the no. of rows and columns of Matrix 1:\n");
            scanf("%d %d", &m, &n);
            printf("Enter the no. of rows and columns of Matrix 2:\n");
            scanf("%d %d", &p, &q);
            printf("Enter the elements of the Matrix 1 : \n");
            read_matrix(A, m, n);
            printf("Enter the elements of the Matrix 2 : \n");
            read_matrix(B, p, q);
            printf("The Matrices are:\n");
            printf("Matrix 1:\n");
            display_matrix(A, m, n);
            printf("\n");
            printf("Matrix 2:\n");
            display_matrix(B, p, q);
            if (n == p)
            {
                printf("Product matrix is:\n");
                multi_matrix(A, B, m, q, p);
            }
            else
            {
                printf("Matrix Multiplication is not possible\n");
            }
            break;

        case 3:
            printf("Enter the no. of rows and columns of Matrix:\n");
            scanf("%d %d", &m, &n);
            printf("Enter the elements of the Matrix : \n");
            read_matrix(A, m, n);
            printf("The Matrix is:\n");
            display_matrix(A, m, n);
            transp_matrix(A, m, n);

            break;

        case 4:
            break;

        default:
            printf("Invalid entry!\n");
            break;
        }

    } while (num != 4);
}

void read_matrix(int c[][5], int m1, int n1)
{
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
}

void sum_matrix(int a1[][5], int b1[][5], int m2, int n2)
{
    int c[5][5];
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            c[i][j] = a1[i][j] + b1[i][j];
        }
    }
    printf("Sum Matrix is : \n");
    display_matrix(c, m2, n2);
}

void multi_matrix(int a1[][5], int b1[][5], int m2, int q2, int p2)
{
    int c[5][5];
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < q2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < q2; k++)
            {
                c[i][j] += a1[i][k] * b1[k][j];
            }
        }
    }
    printf("Product Matrix is : \n");
    display_matrix(c, m2, q2);
}
void transp_matrix(int c[][5], int m1, int n1)
{
    int d[5][5];
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            d[j][i] = c[i][j];
        }   
    }     
    printf("Transposed Matrix is: \n");
    display_matrix(d, n1, m1);
}
void display_matrix(int c[][5], int m1, int n1)
{
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
