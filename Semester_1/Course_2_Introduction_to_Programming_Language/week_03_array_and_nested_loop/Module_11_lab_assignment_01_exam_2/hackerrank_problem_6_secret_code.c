#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t,ara[100005],i,j,prime=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<t;i++)
    {
        if(ara[i]==1)
            printf("No\n");
        else
        {
            for(j=2;j<ara[i];j++)
            {
                if(ara[i]%j==0)
                {
                    prime=1;
                    break;
                }
                else
                {
                    prime=0;
                }
            }
            if(prime==1)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }


    return 0;
}
