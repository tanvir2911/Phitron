#include<stdio.h>
#include <math.h>

int digit_occurs_num_of_times(int *nums, int x, int digit)
{
    int digit_counter = 0;
    for(int i=0;i<x;i++)
    {
        for(;*(nums+i)!=0;)
        {
            if(*(nums+i)%10==digit)
            {
                digit_counter++;
                break;
            }
            *(nums+i)/=10;
        }
    }
    return digit_counter;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    int presence_of_seven = digit_occurs_num_of_times(ara,n,7);

    double x = n/2.0;
    int res = ceil(x);

    if(presence_of_seven>=res)
        printf("Beautiful\n");
    else
        printf("Ugly\n");

    return 0;
}
