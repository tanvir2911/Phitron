#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int j=1;j<=n;j++)
            scanf("%d",&ara[j]);
        int s;
        scanf("%d",&s);
        int x=0;
        for(int j=1;j<=n;j++)
        {
            if(ara[j]==s)
            {
                x=1;
                printf("Case %d: %d\n",i,j);
                break;
            }
        }
        if(x==0) printf("Case %d: Not Found\n",i);
    }

    return 0;
}
