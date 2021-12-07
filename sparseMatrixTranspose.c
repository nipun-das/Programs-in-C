#include <stdio.h>
#define MAX_TERMS 100

struct sparseMatrix
{
    int row;
    int col;
    int value;

} sparse[MAX_TERMS], sparseTranspose[MAX_TERMS];

void convertToSparseMatrix(int matrix[100][100], struct sparseMatrix sparse[MAX_TERMS], int MATRIX_ROWS, int MATRIX_COLUMNS)
{

    sparse[0].row = MATRIX_ROWS;
    sparse[0].col = MATRIX_COLUMNS;
    int i, j, k = 1;
    for (i = 0; i < MATRIX_ROWS; i++)
    {
        for (j = 0; j < MATRIX_COLUMNS; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }
    sparse[0].value = k - 1; //value = no.of non-zero elements = k-1
}


void transposeSparseMatrix(int matrix[100][100], struct sparseMatrix sparse[MAX_TERMS], int MATRIX_ROWS, int MATRIX_COLUMNS)
{
    sparseTranspose[0].row = MATRIX_COLUMNS;
    sparseTranspose[0].col = MATRIX_ROWS;
    sparseTranspose[0].value = sparse[0].value;
    int i, j, k = 1;
    for (i = 0; i < MATRIX_COLUMNS; i++)
    {
        for (j = 1; j <= sparse[0].value; j++)
        {
            if (sparse[j].col == i)
            {
                sparseTranspose[k].row = sparse[j].col;
                sparseTranspose[k].col = sparse[j].row;
                sparseTranspose[k].value = sparse[j].value;
                k++;
            }
        }
    }
}

void printSparseMatrix(struct sparseMatrix sparse[MAX_TERMS])
{
    int i;
    printf("\n");
    printf("ROW  COLUMN  VALUE");
    for (i = 0; i <= sparse[0].value; i++)
    {
        printf("\n");
        printf("%d\t%d\t%d", sparse[i].row, sparse[i].col, sparse[i].value);
    }
}

int main()
{
    int i, j, matrix[100][100], MATRIX_ROWS, MATRIX_COLUMNS;
    printf("\nEnter matrix dimensions: ");
    scanf("%d %d", &MATRIX_ROWS, &MATRIX_COLUMNS);
    printf("\nEnter matrix: ");
    for (i = 0; i < MATRIX_ROWS; i++)
    {
        for (j = 0; j < MATRIX_COLUMNS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    convertToSparseMatrix(matrix, sparse, MATRIX_ROWS, MATRIX_COLUMNS);

    printf("\n\nSPARSE MATRIX ");
    printSparseMatrix(sparse);

    printf("\n\nTRANSPOSE OF SPARSE MATRIX ");
    transposeSparseMatrix(matrix, sparse, MATRIX_ROWS, MATRIX_COLUMNS);
    printSparseMatrix(sparseTranspose);
}