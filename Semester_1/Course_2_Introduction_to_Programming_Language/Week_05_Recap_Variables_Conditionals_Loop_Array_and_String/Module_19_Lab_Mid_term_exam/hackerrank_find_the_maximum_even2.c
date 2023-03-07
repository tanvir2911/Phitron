#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,greatest_even=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    if(n==1)
    {
        if(arr[0]%2==0)
            greatest_even=arr[0];
        else
            greatest_even=0;
        printf("%d\n",greatest_even);
        return 0;
    }
    else if(n==2)
    {
        if((arr[0]%2==0 && arr[1]%2==0) || (arr[0]%2!=0 && arr[1]%2!=0))
            greatest_even=arr[0]+arr[1];
        else if (arr[0]%2==0)
            greatest_even=arr[0];
        else if (arr[1]%2==0)
            greatest_even=arr[1];

        printf("%d\n",greatest_even);
        return 0;
    }


    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = arr[i]+arr[j];
            if(temp%2==0)
            {
                if(temp>greatest_even)
                    greatest_even=temp;
            }
        }

    }

    printf("%d\n",greatest_even);

    return 0;
}
