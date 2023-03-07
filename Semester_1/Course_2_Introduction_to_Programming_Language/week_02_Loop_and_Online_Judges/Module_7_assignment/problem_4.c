#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int i,sum =0;

    for(i=1;5==5;i++)
    {
        sum+=n%10;
        if(n/10==0)
        {
            break;
        }
        n=n/10;
    }
    printf("%d",sum);

    return 0;
}

