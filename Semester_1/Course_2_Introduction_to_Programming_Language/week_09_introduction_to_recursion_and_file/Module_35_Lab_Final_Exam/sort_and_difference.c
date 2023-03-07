#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);

    int ara[n],bara[n];

    for(int i=1; i<=n; i++)
        scanf("%d",&ara[i]);
    for(int i=1; i<=n; i++)
        scanf("%d",&bara[i]);

    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(ara[i]>ara[j])
            {
                int temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }

    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(bara[i]<bara[j])
            {
                int temp = bara[j];
                bara[j] = bara[i];
                bara[i] = temp;
            }
        }
    }

    for(int i=1;i<=n;i++)
        printf("%d ",ara[i]-bara[i]);

    return 0;
}
