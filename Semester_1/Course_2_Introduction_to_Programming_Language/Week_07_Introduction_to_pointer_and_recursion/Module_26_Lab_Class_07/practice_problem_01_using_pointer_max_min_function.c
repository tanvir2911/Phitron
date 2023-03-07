#include<stdio.h>

void find_max_min(int n, int nums[], int* p, int* q)
{
    *p = nums[0];
    *q = nums[0];

    for(int i=0;i<n;i++)
    {
        if(nums[i]<*q)
            *q = nums[i];
        if(nums[i]>*p)
            *p = nums[i];
    }
}

int main()
{
    int ara[] = {12,6,9,3,4,21,66};
    int length = sizeof(ara)/sizeof(int);
    int maxx,minn;

    find_max_min(length,ara,&maxx,&minn);

    printf("Max is %d, Min is %d\n",maxx,minn);

    return 0;
}
