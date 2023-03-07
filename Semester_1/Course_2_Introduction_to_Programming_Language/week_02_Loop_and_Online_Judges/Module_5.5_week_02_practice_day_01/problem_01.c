#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter a positive number to see the sequence of numbers starting from 1: ");
    scanf("%d",&n);

    for(m=1;m<=n;m++)
    {
        printf("%d ",m);
    }

    return 0;
}
