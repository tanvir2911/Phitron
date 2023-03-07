#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;n>1;i++)
    {
        printf("%d, ",n);
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n-=1;
        }
    }
    printf("%d",n);

    return 0;
}

