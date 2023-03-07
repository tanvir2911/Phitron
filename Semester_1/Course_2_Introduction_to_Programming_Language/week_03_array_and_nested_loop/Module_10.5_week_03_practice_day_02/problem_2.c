#include<stdio.h>
int main()
{
    int n,ara[100],i,j,k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        if(ara[i+1]<ara[i])
        {
            j=ara[i+1];
            ara[i+1]=ara[i];
            ara[i]=j;

            for(k=i;k<=0;k--)
            {
                if(ara[k]<ara[i-1])
                {
                    j=ara[i-1];
                    ara[i-1]=ara[i-2];
                    ara[i-2]=j;
                }
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",ara[i]);


    return 0;
}
