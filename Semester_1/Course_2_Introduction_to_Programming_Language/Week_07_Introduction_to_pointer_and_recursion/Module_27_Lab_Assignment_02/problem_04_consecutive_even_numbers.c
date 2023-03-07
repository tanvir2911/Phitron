#include<stdio.h>

void consecutive_even_integers(int x)
{
    int n = (x-12)/4;
    printf("%d %d %d %d\n",n,n+2,n+4,n+6);
}

int main()
{
    int t;
    scanf("%d",&t);
    int ara[t];

    for(int i=0;i<t;i++)
        scanf("%d",&ara[i]);

    for(int i=0;i<t;i++)
        consecutive_even_integers(ara[i]);


    return 0;
}
