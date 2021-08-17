#include <stdio.h>
int add();
int main()
{
    int r;
    printf("Functions example\n");
    r = add();
    printf("Sum is %d", r);
    return 0;
}
int add()
{
    int a, b, s;
    printf("Enter the numbers:\n");
    scanf("%d %d", &a, &b);
    s = a + b;
    return s;
}