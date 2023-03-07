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
        int l,r;
        scanf("%d %d",&l,&r);

        for(int i=l;i<=r;i++)
        {
            if(i==1 || i==2)
            {
                printf("%d ",i);
                continue;
            }
            int x=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    x=1;
                    break;
                }
            }
            if(x==0) printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
