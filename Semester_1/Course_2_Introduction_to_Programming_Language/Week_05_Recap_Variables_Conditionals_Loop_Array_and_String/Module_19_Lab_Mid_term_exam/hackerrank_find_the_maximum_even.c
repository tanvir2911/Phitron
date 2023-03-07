#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,largest_number,second_largest,number_of_evens=0,greatest_even;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);



    largest_number=arr[0];
    second_largest=arr[1];
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]>largest_number)
        {
            second_largest=largest_number;
            largest_number=arr[i+1];
        }

    }

    if(largest_number%2==0 && second_largest%2==0)
    {
        printf("%d",largest_number+second_largest);
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            number_of_evens++;
        }
    }

    if((number_of_evens==1 && n>3) || number_of_evens==(n-1))
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=second_largest)
            {
                if((arr[i]+second_largest)%2==0)
                {
                    greatest_even=arr[i]+second_largest;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=largest_number)
            {
                if((arr[i]+largest_number)%2==0)
                {
                    greatest_even=arr[i]+largest_number;
                }
            }
        }
    }

    printf("%d\n",greatest_even);

    return 0;
}


//incomplete




