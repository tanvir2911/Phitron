#include<stdio.h>

int sum_of_odd_odd_even_even(int nums[],int x)
{
    int summ=0;
    for(int i=0;i<x;i++)
    {
        if((i+1)%2==0 && nums[i]%2==0)
            summ+=(i+1+nums[i]);
        else if((i+1)%2!=0 && nums[i]%2!=0)
            summ+=(i+1+nums[i]);
    }

    return summ;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    int summ = sum_of_odd_odd_even_even(ara,n);
    printf("%d\n",summ);

    return 0;
}
