#include <stdio.h>
int main()
{
    int n, ara[100],q,i,v,j;
    printf("The size of the array: ");
    scanf("%d",&n);

    printf("Enter the numbers of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    printf("How many numbers of the array you want to change? ");
    scanf("%d",&q);
    printf("Enter the index and input numbers in pairs: ");

    for(i=0;i<q;i++)
    {
        scanf("%d%d",&j,&v);
        ara[j]+=v;
    }

    printf("The updated array is: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
