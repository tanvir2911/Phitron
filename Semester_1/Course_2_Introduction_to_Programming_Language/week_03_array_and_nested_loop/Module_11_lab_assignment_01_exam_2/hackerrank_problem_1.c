#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,ara[100],bara[100],i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&ara[0]);
        int sum=0;
        for(j=1;j<4;j++)
        {
            scanf("%d",&ara[j]);
            sum+=ara[j];
        }
         bara[i]=ara[0]-sum;
    }

    for(i=0;i<t;i++)
        printf("%d\n",bara[i]);

    return 0;
}

