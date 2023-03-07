#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter a positive or negative number to see the numbers starting from 1: ");
    scanf("%d",&n);

    if(n>0)
    {
        for(m=1;m<=n;m++)
        {
            printf("%d ",m);
        }
    }
    else
    {
        for(m=1;m>=n;m--)
        {
            printf("%d ",m);
        }
    }

    return 0;
}
