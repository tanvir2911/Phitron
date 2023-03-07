#include<stdio.h>

int input()
{
    int x;
    scanf("%d",&x);
    return x;
}

int main()
{
    int a,b;
    a=input();
    b=input();

    printf("The sum of %d %d is %d\n",a,b,a+b);

    return 0;
}

