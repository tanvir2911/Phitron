#include<stdio.h>
#include<math.h>

int difference(int x, int y)
{
    printf("The difference between %d and %d is %d\n",x,y,abs(x-y));
}

int main()
{
    int a=5, b=6;

    difference(a,b);

    return 0;
}

