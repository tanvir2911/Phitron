#include<stdio.h>

int beautiful_array(int* nums)
{/*
    if(nums[0]<nums[1] && nums[1]<nums[2] && nums[2]<nums[3])
        return nums[0]+nums[2];
    else if(nums[0]<nums[1] && nums[2]<nums[3] && nums[1]==nums[2])
        return nums[1];
    else if(nums[0]<nums[1] && nums[2]==nums[3])
        return nums[0]+nums[2];
    else if(nums[0]<nums[1] && nums[1]==nums[2] && nums[2]==nums[3])
        return nums[1];
    else if(nums[0]==nums[1] && nums[1]==nums[2])
        return nums[2];
    else if(nums[0]==nums[1] && nums[1]!=nums[2])
        return nums[1]+nums[2];
*/

    if(nums[0]<nums[1] && nums[2]<nums[3])
    {
        if(nums[1]==nums[2])
            return nums[1];
        else if(nums[1]<nums[2])
            return nums[0]+nums[2];
        else if(nums[1]>nums[2])
            return nums[2];
    }
    else if(nums[0]==nums[1] && nums[2]==nums[3])
    {
        if(nums[1]<nums[2])
            return nums[0]+nums[2];
        else if(nums[1]==nums[2])
            return nums[2];
        else if(nums[1]>nums[2])
            return nums[0]+nums[2];
    }
    /*
    else
    {
    if(nums[2]<nums[1])
        return nums[2];
    if(nums[2]>nums[1])
        return nums[2]+nums[1];
    }*/
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int ara[4];
        for(int j=0; j<4; j++)
            scanf("%d",&ara[j]);
        printf("\n%d\n",beautiful_array(ara));
    }

    return 0;
}
