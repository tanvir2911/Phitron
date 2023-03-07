#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number to see all the even numbers starting from 2: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        printf("%d ", i);
    }

    return 0;
}
