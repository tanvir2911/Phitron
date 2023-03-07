#include<stdio.h>

int is_last_digit_zero(int* p)
{
    if(*p%10==0)
        return 1;
    else
        return 0;
}

int sum_of_array_with_last_digits_zero(int nums[], int x)
{
    int sum = 0;
    for(int i=0;i<x;i++)
    {
        int last_digit_zero = is_last_digit_zero(&nums[i]);
        if(last_digit_zero == 1)
            sum+=nums[i];
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

    int sum = sum_of_array_with_last_digits_zero(ara,n);

    printf("%d\n",sum);

    return 0;
}
