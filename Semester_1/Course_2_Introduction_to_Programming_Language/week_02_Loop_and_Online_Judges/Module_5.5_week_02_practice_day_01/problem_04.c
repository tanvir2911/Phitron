#include <stdio.h>
int main()
{
    int n,m,factors;
    printf("Enter two numbers first one as the dividend and the second one as the divisor, to see the the factors starting from 1: ");
    scanf("%d%d",&n,&m);

    for(factors=m; factors<=n;factors+=m)
    {
        printf("%d ",factors);
    }

    return 0;
}
