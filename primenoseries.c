/*Print series of Prime Numbers between two limits*/

#include <stdio.h>
void main()
{
    int n,l,u,i,j,f=1;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);
    for (i = l+1; i <= u-1; i++)
    {
        f = 1;
        for (j =2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
    if(f==1)
    {
    printf("%d\t",i);    
    }
    }
}