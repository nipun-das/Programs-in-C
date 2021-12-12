#include <stdio.h>
#define MAX 100

typedef struct term
{
    int row;
    int col;
    int value;

} term;

void convertToTuple(int a[100][100], term b[MAX], int ROWS, int COLUMNS)
{

    b[0].row = ROWS;
    b[0].col = COLUMNS;
    int i, j, k = 1;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            if (a[i][j] != 0)
            {
                b[k].row = i;
                b[k].col = j;
                b[k].value = a[i][j];
                k++;
            }
        }
    }
    b[0].value = k - 1; //value = no.of non-zero elements = k-1
}

void transposeTuple(int a[100][100], term b[MAX], term c[MAX], int ROWS, int COLUMNS)
{
    c[0].row = COLUMNS;
    c[0].col = ROWS;
    c[0].value = b[0].value;
    int i, j, k = 1;
    for (i = 0; i < COLUMNS; i++)
    {
        for (j = 1; j <= b[0].value; j++)
        {
            if (b[j].col == i)
            {
                c[k].row = b[j].col;
                c[k].col = b[j].row;
                c[k].value = b[j].value;
                k++;
            }
        }
    }
}

void printTuple(term b[MAX])
{
    int i;
    printf("\n");
    printf("ROW  COLUMN  VALUE");
    for (i = 0; i <= b[0].value; i++)
    {
        printf("\n");
        printf("%d\t%d\t%d", b[i].row, b[i].col, b[i].value);
    }
}

int main()
{
    int i, j, a[100][100], ROWS, COLUMNS;
    term b[MAX], c[MAX];
    printf("\nEnter matrix order: ");
    scanf("%d %d", &ROWS, &COLUMNS);
    printf("\nEnter matrix: ");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    convertToTuple(a, b, ROWS, COLUMNS);

    printf("\n\nSPARSE MATRIX ");
    printTuple(b);

    printf("\n\nTRANSPOSE OF SPARSE MATRIX ");
    transposeTuple(a, b, c, ROWS, COLUMNS);
    printTuple(c);
}
