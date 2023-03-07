#include <stdio.h>
int main()
{
    int n,ara[100],i,even=0,odd=0;
    scanf("%d",&n);

    ara[0]=2;

    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);

    for(i=1;i<=n;i++)
    {
        if(ara[i]%2==0)
        {
           ara[i]=1;
           even++;
        }
        else
        {
            ara[i]=0;
            odd++;
        }
    }

    if(even>odd)
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]==0)
            {
                printf("%d",i);
                break;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]==1)
            {
                printf("%d",i);
                break;
            }
        }
    }

    return 0;
}
