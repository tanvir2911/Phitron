#include<stdio.h>

int summation(int x, int y)
{
    return x+y;
}

int main()
{
    int a=5, b=6;

    int summ = summation(a,b);

    printf("The sum of %d and %d is %d\n",a,b,summ);

    return 0;
}

