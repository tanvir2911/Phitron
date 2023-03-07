#include<stdio.h>

int S(int x)
{
    if(x==1)
        return 1;
    else
        return x + S(x-1);
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("Sum is %d\n",S(n));

    return 0;
}
