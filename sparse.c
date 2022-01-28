/*Experiment 1.B
C C Nipun Das
VML20CS066*/

#include <stdio.h>
#define MAX 100
#define MAX_COL 30

typedef struct
{
    int row;
    int col;
    int value;
} term;

void convertToTuple(int m1[100][100], term a[MAX], int ROWS1, int COLUMNS1)
{
    a[0].row = ROWS1;
    a[0].col = COLUMNS1;
    int i, j, k = 1;
    for (i = 0; i < ROWS1; i++)
    {
        for (j = 0; j < COLUMNS1; j++)
        {
            if (m1[i][j] != 0)
            {
                a[k].row = i;
                a[k].col = j;
                a[k].value = m1[i][j];
                k++;
            }
        }
    }
    a[0].value = k - 1;
}
void transposeTuple(term a[MAX], term aTranspose[MAX])
{
    int numCols = a[0].col, numTerms = a[0].value, rowTerms[MAX_COL], startingPos[MAX_COL];
    aTranspose[0].row = numCols;
    aTranspose[0].col = a[0].row;
    aTranspose[0].value = numTerms;
    int i, j, k = 1;
    for (i = 0; i < numCols; i++)
    {
        rowTerms[i] = 0;
    }
    for (i = 1; i <= numTerms; i++)
    {
        rowTerms[a[i].col]++;
    }
    startingPos[0] = 1;
    for (i = 1; i < numCols; i++)
    {
        startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
    }
    for (i = 1; i <= numTerms; i++)
    {
        j = startingPos[a[i].col]++;
        aTranspose[j].row = a[i].col;
        aTranspose[j].col = a[i].row;
        aTranspose[j].value = a[i].value;
    }
}
void sumOfMatrices(term a[MAX], term b[MAX], term sum[MAX])
{
    int i = 1, j = 1, k = 1;
    int l1 = a[0].value;
    int l2 = b[0].value;
    sum[0].row = a[0].row;
    sum[0].col = a[0].col;
    while (i <= l1 && j <= l2)
    {
        if (a[i].row == b[j].row)
        {
            if (a[i].col == b[j].col)
            {
                sum[k].row = a[i].row;
                sum[k].col = a[i].col;
                sum[k].value = a[i].value + b[j].value;
                i++;
                j++;
                k++;
            }
            else
            {
                if (a[i].col < b[j].col)
                {
                    sum[k].row = a[i].row;
                    sum[k].col = a[i].col;
                    sum[k].value = a[i].value;
                    i++;
                    k++;
                }
                else
                {
                    sum[k].row = b[j].row;
                    sum[k].col = b[j].col;
                    sum[k].value = b[j].value;
                    j++;
                    k++;
                }
            }
        }
        else
        {
            if (a[i].row > b[j].row)
            {
                sum[k].row = b[j].row;
                sum[k].col = b[j].col;
                sum[k].value = b[j].value;
                j++;
                k++;
            }
            else
            {
                sum[k].row = a[i].row;
                sum[k].col = a[i].col;
                sum[k].value = a[i].value;
                i++;
                k++;
            }
        }
    }
    while (j <= l2 && i >= l1)
    {
        sum[k].row = b[j].row;
        sum[k].col = b[j].col;
        sum[k].value = b[j].value;
        j++;
        k++;
    }
    while (i <= l1 && j >= l2)
    {
        sum[k].row = a[i].row;
        sum[k].col = a[i].col;
        sum[k].value = a[i].value;
        i++;
        k++;
    }
    sum[0].value = k - 1;
}
void printTuple(term b[MAX])
{
    int i;
    printf("\n");
    printf("ROW COLUMN VALUE");
    for (i = 0; i <= b[0].value; i++)
    {
        printf("\n");
        printf("%d\t%d\t%d", b[i].row, b[i].col, b[i].value);
    }
}
int main()
{
    int i, j, m1[100][100], m2[100][100], ROWS1, COLUMNS1, ROWS2, COLUMNS2;
    term a[MAX], b[MAX], aTranspose[MAX], bTranspose[MAX], sum[MAX];
    printf("\nEnter matrix 1 order: ");
    scanf("%d %d", &ROWS1, &COLUMNS1);
    printf("\nEnter matrix 1: ");
    for (i = 0; i < ROWS1; i++)
    {
        for (j = 0; j < COLUMNS1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nEnter matrix 2 order: ");
    scanf("%d %d", &ROWS2, &COLUMNS2);
    printf("\nEnter matrix 2: ");
    for (i = 0; i < ROWS2; i++)
    {
        for (j = 0; j < COLUMNS2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    convertToTuple(m1, a, ROWS1, COLUMNS1);
    printf("\n\nTriplet Form of First Sparse Matrix ");
    printTuple(a);
    printf("\n\nTranspose Triplet Form Of First Sparse Matrix ");
    transposeTuple(a, aTranspose);
    printTuple(aTranspose);
    convertToTuple(m2, b, ROWS2, COLUMNS2);
    printf("\n\nTriplet Form of Second Sparse Matrix ");
    printTuple(b);
    printf("\n\nTranspose Triplet Form Of Second Sparse Matrix ");
    transposeTuple(b, bTranspose);
    printTuple(bTranspose);
    if (ROWS1 == ROWS2 && COLUMNS1 == COLUMNS2)
    {
        printf("\n\nSUM OF SPARSE MATRICES");
        sumOfMatrices(a, b, sum);
        printTuple(sum);
    }
    else
    {
        printf("\n\nMATRICES ARE NOT OF THE SAME ORDER\nCANNOT BE ADDED");
    }
}

/*OUTPUT:

Enter matrix 1 order: 2 3
Enter matrix 1: 1 0 0 5 2 0
Enter matrix 2 order: 2 3
Enter matrix 2: 1 3 0 5 0 2
Triplet Form of First Sparse Matrix 
ROW COLUMN VALUE
2 3 3
0 0 1
1 0 5
1 1 2
Transpose Triplet Form Of First Sparse Matrix 
ROW COLUMN VALUE
3 2 3
0 0 1
0 1 5
1 1 2
Triplet Form of Second Sparse Matrix 
ROW COLUMN VALUE
2 3 4
0 0 1
0 1 3
1 0 5
1 2 2
Transpose Triplet Form Of Second Sparse Matrix
ROW COLUMN VALUE
3 2 4
0 0 1
0 1 5
1 0 3
2 1 2
SUM OF SPARSE MATRICES
ROW COLUMN VALUE
2 3 5
0 0 2
0 1 3
1 0 10
1 1 2
1 2 2

*/