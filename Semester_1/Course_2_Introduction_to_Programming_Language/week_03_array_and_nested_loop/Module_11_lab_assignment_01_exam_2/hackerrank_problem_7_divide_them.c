#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,roll[25],k,i,right_order[25];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        scanf("%d",&roll[i]);

    scanf("%d",&k);

    int p=k;
    for(i=1;i<=n-p;i++)
    {
        right_order[i]=roll[k+1];
        k++;
    }
    int m=1;
    for(i=n-p+1;i<=n;i++)
    {
        right_order[i]=roll[m];
        m++;
    }

    for(i=1;i<=n;i++)
        printf("%d ",right_order[i]);

    return 0;
}
