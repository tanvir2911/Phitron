#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int i;

    for(i=1;5==5;i++)
    {
        n=n/10;
        if(n/10==0)
        {
            i++;
            break;
        }
    }
    printf("%d digits",i);

    return 0;
}
