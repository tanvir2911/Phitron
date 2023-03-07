#include<stdio.h>

void sorting(int nums[],int x)
{
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(nums[j]<nums[i])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}

int kth_largest_element(int nums[], int x, int y)
{
    return nums[x-y];

}

int kth_smallest_element(int nums[], int y)
{
    return nums[y-1];
}

int main()
{
    int n,k;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    scanf("%d",&k);

    sorting(ara,n);

    for(int i=0;i<n;i++)
        printf("%d ",ara[i]);

    printf("\n");

    printf("%dth largest element = %d\n",k,kth_largest_element(ara,n,k));
    printf("%dth smallest element = %d\n",k,kth_smallest_element(ara,k));

    return 0;
}
