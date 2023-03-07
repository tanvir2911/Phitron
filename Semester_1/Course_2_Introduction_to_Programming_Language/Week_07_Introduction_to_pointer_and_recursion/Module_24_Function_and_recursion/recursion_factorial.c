#include<stdio.h>
    // factorial(n) = n * factorial(n-1)
    // factorial(0) = 1

int factorial(int n)
{
    if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));

    return 0;
}
