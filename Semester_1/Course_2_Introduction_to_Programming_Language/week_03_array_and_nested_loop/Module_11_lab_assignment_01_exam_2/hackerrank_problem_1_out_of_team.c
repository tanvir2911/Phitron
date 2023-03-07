#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,k,ara[105],counter=0,i;
    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        if(ara[i]<k)
            counter++;
    }
    printf("%d",counter);

    return 0;
}

