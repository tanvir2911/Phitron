#include <stdio.h>
int main()
{
    long long int n, ara[200000],i, missing_number,sum=0,faulty_sum=0;
    scanf("%lld",&n);

    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&ara[i]);
        faulty_sum+=ara[i];
    }
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }

    missing_number=sum-faulty_sum;

    printf("%lld\n",missing_number);

    return 0;
}
