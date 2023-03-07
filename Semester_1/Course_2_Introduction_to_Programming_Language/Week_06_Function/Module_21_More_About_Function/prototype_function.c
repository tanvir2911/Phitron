#include<stdio.h>

int max_of_three(int x, int y, int z);

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int max = max_of_three(a,b,c);

    printf("The maximum of the three number is %d\n",max);

    return 0;
}

int max_of_three(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
