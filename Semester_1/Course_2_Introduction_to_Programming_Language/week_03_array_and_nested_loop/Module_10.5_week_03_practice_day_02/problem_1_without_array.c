#include <stdio.h>
int main()
{
    int n,i=0,j=1,c;
    scanf("%d",&n);

    if(n==1)
        printf("%d ",i);
    else if(n==0)
        printf("%d ",i);
    else if(n==2)
    {
        printf("%d ",i);
        printf("%d ",j);
    }
    else
    {
        printf("%d ",i);
        printf("%d ",j);

        for(c=0;i<n;c++)
        {
            i+=j;
            printf("%d ",i);
            j+=i;
            printf("%d ",j);
        }
    }

    return 0;
}
