#include<stdio.h>

int fact(int x);

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);

    int permutation = fact(n) / fact(n-r);
    printf("Permutation = %d\n",permutation);

    return 0;
}

int fact(int x)
{
    int result = 1;
    for(int i=x;i>=1;i--)
    {
        result *=i;
    }
}

