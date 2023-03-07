#include<stdio.h>
int main()
{
    int n,k,ara[105],i,next_round=0;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);

    for(i=1;i<=n;i++)
    {
        if(ara[k]==0)
        {
            if(ara[i]>ara[k])
                next_round++;
        }
        else if(ara[i]>=ara[k])
            next_round++;

    }

    printf("%d",next_round);

    return 0;
}
