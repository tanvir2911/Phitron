//sum of digits is prime
//1231 --> 1+2+3+1 = 7 (prime)
//--> Tanvir's number
//

#include<stdio.h>

int sum_of_digits(int x)
{
    int sum=0;
    for(;x!=0;)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

int is_prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(is_prime(sum_of_digits(n))==1)
        printf("Tanvir's Number\n");
    else
        printf("No\n");

    return 0;
}
