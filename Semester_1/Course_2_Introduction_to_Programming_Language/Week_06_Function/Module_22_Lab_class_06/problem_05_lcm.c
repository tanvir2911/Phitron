#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("LCM is %d\n",lcm(a,b));

    return 0;
}

int lcm(int x, int y)
{
    int greater;
    if(x>y)
        greater = x;
    else
        greater=y;

    for(int i=greater;;i++)
    {
        if(i%x==0 && i%y==0)
            return i;
    }
}
