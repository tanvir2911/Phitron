#include <stdio.h>
int main()
{
    int n,i,ara[100];
    printf("The size of the array: ");
    scanf("%d",&n);

    printf("Enter the numbers of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("The reversed array is: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
