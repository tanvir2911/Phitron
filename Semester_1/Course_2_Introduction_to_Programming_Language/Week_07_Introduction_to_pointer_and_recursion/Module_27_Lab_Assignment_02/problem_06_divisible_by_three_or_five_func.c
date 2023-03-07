#include<stdio.h>

int divisible_by_three(int x)
{
    if(x%3==0)
        return 1;
    return 0;
}

int divisible_by_five(int x)
{
    if(x%5==0)
        return 1;
    return 0;
}

int divisible_by_three_or_five(int nums[], int x)
{
    int sum=0;
    for(int i=0;i<x;i++)
    {
        if(divisible_by_three(nums[i]) || divisible_by_five(nums[i]))
            sum++;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    int ans = divisible_by_three_or_five(ara,n);
    if(ans>0)
        printf("%d\n",ans);
    else
        printf("%d\n",-1);

    return 0;
}
