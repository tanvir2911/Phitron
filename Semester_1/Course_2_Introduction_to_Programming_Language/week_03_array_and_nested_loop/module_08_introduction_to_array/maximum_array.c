#include <stdio.h>
int main()
{
    int n=6, ara[n], i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    int max=ara[0];

    for(int i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
        else
        {
            continue;
        }
    }

    printf("The maximum number you entered is %d\n",max);


    return 0;
}

