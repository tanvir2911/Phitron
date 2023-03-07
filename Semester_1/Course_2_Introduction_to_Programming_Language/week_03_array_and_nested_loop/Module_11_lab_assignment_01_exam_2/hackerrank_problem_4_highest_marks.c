#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,ara[105],i,highest=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        if(highest>ara[i])
            continue;
        else
            highest=ara[i];
    }

    for(i=0;i<n;i++)
        printf("%d ",highest-ara[i]);


    return 0;
}

