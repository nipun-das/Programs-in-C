#include <stdio.h>
#define MAX 100

typedef struct term
{
    int row;
    int col;
    int value;

} term;

void convertToTuple(int matrix[100][100], term sparse[MAX], int ROWS, int COLUMNS)
{

    sparse[0].row = ROWS;
    sparse[0].col = COLUMNS;
    int i, j, k = 1;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
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


void printTuple(term sparse[MAX])
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
    int i, j, matrix[100][100], ROWS, COLUMNS;
    term sparse[MAX];
    printf("\nEnter matrix order: ");
    scanf("%d %d", &ROWS, &COLUMNS);
    printf("\nEnter matrix: ");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nENTERED MATRIX\n");    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    convertToTuple(matrix, sparse, ROWS, COLUMNS);

    printf("\n\nSPARSE MATRIX");
    printTuple(sparse);

}