#include<stdio.h>

int median(int nums[],int length);

int main()
{
    int arr[] = {5, 25, 11, 55,1, 2, 65, 99, 15, 40};

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("The median is %d\n",median(arr,length));

    return 0;
}

int median(int nums[], int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }

    if(length%2!=0)
        return nums[(length/2)];
    else
        return (nums[length/2-1] + nums[(length/2)])/2;

}
