#include<stdio.h>

int is_prime(int n);

int main()
{
    int n;
    scanf("%d",&n);

    if(is_prime(n))
        printf("Prime Number.\n");
    else
        printf("Composite Number.\n");

    return 0;
}

int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
