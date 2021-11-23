#include <stdio.h>
struct Student
{
    int Roll;
    char Name[25];
    int Marks[6];
    int Total;
    float Avg;
} S;
void main()
{
    int i;
    printf("\nEnter Student Roll : ");
    scanf("%d", &S.Roll);
    printf("\nEnter Student Name : ");
    scanf("%s", S.Name);
    S.Total = 0;
    for (i = 0; i < 6; i++)
    {
        printf("\nEnter Marks %d : ", i + 1);
        scanf("%d", &S.Marks[i]);
        S.Total = S.Total + S.Marks[i];
    }
    S.Avg = S.Total / 6;
    printf("\nRoll : %d", S.Roll);
    printf("\nName : %s", S.Name);
    printf("\nTotal : %d", S.Total);
    printf("\nAverage : %f", S.Avg);
}