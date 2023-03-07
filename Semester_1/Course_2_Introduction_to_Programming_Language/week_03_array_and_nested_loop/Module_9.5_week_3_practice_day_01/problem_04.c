#include <stdio.h>
int main()
{
    int n,ara[100],i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        printf("%d - ",ara[i]);
        for(j=0;j<n;j++)
        {
            if(ara[i]!=ara[j])
                printf("%d ",ara[j]);
        }
        printf("\n");
    }

    return 0;
}
