#include<stdio.h>

void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
        solve();

    return 0;
}

