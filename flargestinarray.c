#include <stdio.h>
int largest(int arr[], int n);
int main()
{
    int i, size, A[30], large;
    printf("Enter the number of elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }

    large = largest(A, size);
    printf("Largest of the elements is %d", large);
}
int largest(int a[], int n)
{
    int i, large;
    large = a[0];
    for (i = 1; i < n; i++) // i=1
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        else
        {
            return large;
        }
    }
}