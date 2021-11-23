#include <stdio.h>
struct Student
{
    int Roll;
    char Name[25];
    int Marks[6];
    int Total;
    float Avg;
} S[60];
void main()
{
    int i, j, n;
    printf("\nEnter the Number of Students : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student %d Details", i + 1);
        printf("\n*************************");
        printf("\nEnter Student Roll : ");
        scanf("%d", &S[i].Roll);
        printf("\nEnter Student Name : ");
        scanf("%s", S[i].Name);
        S[i].Total = 0;
        for (j = 0; j < 6; j++)
        {
            printf("\nEnter Marks %d : ", j + 1);
            scanf("%d", &S[i].Marks[j]);
            S[i].Total = S[i].Total + S[i].Marks[j];
        }
        S[i].Avg = S[i].Total / 6;
    }

    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("\nStudent %d Details", i + 1);
        printf("\nRoll : %d", S[i].Roll);
        printf("\nName : %s", S[i].Name);
        printf("\nTotal : %d", S[i].Total);
        printf("\nAverage : %f", S[i].Avg);
        printf("\n");
    }
}