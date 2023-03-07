#include <stdio.h>
int main()
{
    int i,n,m;
    printf("Enter 2 different time (in 24 hours format) to see the hours passed between: ");
    scanf("%d%d",&n,&m);


    for(i=n;5==5;i++)
    {
        if(i==24)
        {
            if(i==m)
            {
                printf("0");
                break;
            }
            i=0;
        }
        else if(i==m)
        {
            printf("%d ",i);
            break;
        }
        printf("%d ",i);
    }

    return 0;
}
