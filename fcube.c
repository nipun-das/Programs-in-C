#include <stdio.h>
int cube(int a);
int main()
{
    int x, r;
    printf("Enter the Number:\n");
    scanf("%d", &x);
    r = cube(x);
    printf("Cube is %d", r);
    return 0;
}
int cube(int a)
{
    int c;
    c = (a * a * a);
    return c;
}
