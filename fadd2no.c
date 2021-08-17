#include <stdio.h>
int add(int, int);
int main()
{
    int x, y, r;
    printf("Enter the Numbers:\n");
    scanf("%d %d", &x, &y);
    r = add(x, y);
    printf("Sum is %d", r);
    return 0;
}
int add(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
