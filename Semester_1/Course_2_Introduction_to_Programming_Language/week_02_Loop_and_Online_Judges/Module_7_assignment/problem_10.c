#include <stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x=1;
            printf("Composite");
            break;
        }
    }
    if(x==0)
    {
        printf("Prime");
    }


    return 0;
}



