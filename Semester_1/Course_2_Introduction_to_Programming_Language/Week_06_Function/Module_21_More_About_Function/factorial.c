#include<stdio.h>

int fact(int x);

int main()
{
    int n;
    scanf("%d",&n);

    int ans = fact(n);
    printf("Factorial = %d\n",ans);

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
