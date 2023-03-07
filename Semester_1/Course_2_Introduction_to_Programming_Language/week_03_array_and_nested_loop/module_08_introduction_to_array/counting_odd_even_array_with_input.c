#include <stdio.h>
int main()
{
    int n;
    int ara[100];
    int i;

    printf("The size of the array: ");
    scanf("%d",&n);

    int even=0, odd=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("The No. of evens is %d\n",even);
    printf("The No. of odds is %d\n",odd);

    return 0;
}
