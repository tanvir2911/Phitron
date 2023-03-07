#include <stdio.h>
int main()
{
    long long int n, ara[200001],i,x,missing_num;

    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        ara[x]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]!=1)
        {
            missing_num=i;
            break;
        }
    }

    printf("%d",missing_num);

    return 0;
}
