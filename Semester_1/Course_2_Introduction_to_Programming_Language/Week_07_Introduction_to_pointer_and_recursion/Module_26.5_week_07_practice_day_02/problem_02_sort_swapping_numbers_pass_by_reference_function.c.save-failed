#include<stdio.h>

void swap(int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int nums[], int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(nums[j]>nums[i])
                swap(&nums[j],&nums[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    bubble_sort(ara,n);

    for(int i=0;i<n;i++)
        printf("%d ",ara[i]);

    return 0;
}
