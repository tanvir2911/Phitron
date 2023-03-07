#include<stdio.h>

int ratio(int a, int b);
int fact(int a);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("The ratio of the factorials of the numbers is %d\n",ratio(a,b));

    return 0;
}

int ratio(int a, int b)
{
    return fact(a)/fact(b);
}

int fact(int a)
{
    int res=1;
    for(int i=a;i>=1;i--)
        res*=i;
    return res;
}
