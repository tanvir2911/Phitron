#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int sum = add_them(9,arr);

    printf("The sum is %d\n",sum);

    return 0;
}

int add_them(int n, int nums[])
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=nums[i];
    return sum;
}
