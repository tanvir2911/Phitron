#include<stdio.h>

int num_of_primes(int *nums,int x)
{
    int counter=0;
    for(int i=0;i<x;i++)
    {
        for(int j=2;j<=*(nums+i)/2;j++)
        {
            if(*(nums+i)%j==0)
            {
                counter--;
                break;
            }
        }
        counter++;
    }
    return counter;
}

float average_of_evens(int *nums,int x)
{
    int even_counter=0, sum_of_evens=0;
    for(int i=0;i<x;i++)
    {
        if(*(nums+i)%2==0)
        {
            sum_of_evens+=*(nums+i);
            even_counter++;
        }
    }
    return sum_of_evens/even_counter;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    printf("Prime numbers: %d\n",num_of_primes(ara,n));
    printf("Average of all even integers: %0.2f\n",average_of_evens(ara,n));

    return 0;
}
