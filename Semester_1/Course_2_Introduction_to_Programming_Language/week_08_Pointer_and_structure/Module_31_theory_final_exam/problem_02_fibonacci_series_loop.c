#include<stdio.h>

void fibo(int n)
{
    if(n==1)
        printf("%d\n",0);
    else if(n==2)
        printf("%d, %d\n",0,1);
    else if(n>2)
    {
        int p=0,q=1;
        printf("%d, %d, ",p,q);
        for(int i=3;i<=n;i++)
        {
            printf("%d, ",p+q);
            int temp=p;
            p=q;
            q=temp+q;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    fibo(n);

    return 0;
}
