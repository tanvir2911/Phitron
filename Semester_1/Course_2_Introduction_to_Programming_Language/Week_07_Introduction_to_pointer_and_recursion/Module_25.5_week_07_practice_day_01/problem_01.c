#include<stdio.h>

int strinctly_less_or_greater_than(int nums[], int x, int y)
{
    int counter = 0;
    for(int i=0; i<y; i++)
    {
        if(nums[i]>x || nums[i]<x)
            counter++;
    }
    return counter;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    int ara[n];

    for(int i=0; i<n; i++)
        scanf("%d",&ara[i]);

    scanf("%d",&k);

    int ans = strinctly_less_or_greater_than(ara, k,n);

    printf("\n%d\n",ans);

    return 0;
}
