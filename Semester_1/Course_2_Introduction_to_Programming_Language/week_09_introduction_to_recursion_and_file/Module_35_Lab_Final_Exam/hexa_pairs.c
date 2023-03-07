#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n,counter=0;
        scanf("%d",&n);
        int ara[1005];
        for(int j=1; j<=n; j++)
            scanf("%d",&ara[j]);

        for(int j=1; j<n; j++)
        {
            for(int k=j+1; k<=n; k++)
            {
                int gcd=0;

                for(int l=1; l <= ara[j] && l <= ara[k]; ++l)
                {
                    // Checks if i is factor of both integers
                    if(ara[j]%l==0 && ara[k]%l==0)
                        gcd = l;
                }

                if(gcd==1) counter++;
            }
        }
        printf("%d\n",counter*2);
    }

    return 0;
}
