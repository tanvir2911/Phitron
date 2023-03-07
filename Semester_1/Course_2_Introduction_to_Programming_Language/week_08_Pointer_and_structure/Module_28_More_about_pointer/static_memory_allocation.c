#include <stdio.h>

// compile time memory allocation

int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++)
    {
        ara[i] = i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d th position --> %d\n",i,ara[i]);
    }

    return 0;
}
