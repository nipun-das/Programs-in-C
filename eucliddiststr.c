//Implement a program to read two input each representing the distances between two points in the Euclidean space, store these in structure variables and add the two distance values.

#include <stdio.h>
#include <math.h>
struct euclid
{
    int x;
    int y;
} e1, e2;
void main()
{
    int a, b;
    float dist;
    printf("Enter the X and Y coordinates of Point 1  ");
    scanf("%d %d", &e1.x,&e1.y);
    printf("Enter the X and Y coordinates of Point 1  ");
    scanf("%d %d", &e2.x,&e2.y);
    a = e2.x - e1.x;
    b = e2.y - e1.y;
    dist = sqrt((a * a) + (b * b));
    printf("Euclidean Distance: %f", dist);
}