#include <stdio.h>
int main()
{
    int n,m,sum,total_sum=0,ara[100],i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&m);
            sum+=m;
        }
        if(sum>=2)
        {
            total_sum++;
        }
    }
    printf("%d",total_sum);

    return 0;
}
