#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("GCD is %d\n",gcd(a,b));

    return 0;
}

int gcd(int a, int b)
{
    int smaller;
    if(a<b)
        smaller=a;
    else
        smaller=b;

    for(int i=smaller; i>=1;i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
    return 1;
}
