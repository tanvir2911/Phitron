#include <stdio.h>
int main()
{
    int i, sum=0, n;
    printf("Please enter the number of passengers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int w;
        printf("Enter next number: ");
        scanf("%d",&w);
        sum += w;
    }

    printf("The sum of weights of the passers is %d",sum);

    return 0;
}
