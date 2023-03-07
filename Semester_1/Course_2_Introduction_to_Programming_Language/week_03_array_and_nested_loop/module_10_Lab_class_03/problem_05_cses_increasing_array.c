#include <stdio.h>
int main()
{
    int n,ara[200005],i,x;
    long long int move=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n-1;i++)
    {
        if(ara[i+1]<=ara[i])
        {
            x=ara[i]-ara[i+1];
            ara[i+1]+=x;
            move+=x;
        }
    }

    printf("%lld",move);

    return 0;
}
