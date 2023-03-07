#include<stdio.h>
int main()
{
    int a,b,smaller,ans;
    scanf("%d %d",&a,&b);

    if(a<b)
        smaller=a;
    else
        smaller=b;

    for(int i=smaller;i>1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
            break;
        }
    }
    printf("The gcd is %d\n",ans);

    return 0;
}
