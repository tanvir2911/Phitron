#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);

        for(;;)
        {
            int remainder = x%10;
            if(remainder==1) putchar('A');
            if(remainder==2) putchar('B');
            if(remainder==3) putchar('C');
            if(remainder==4) putchar('D');
            if(remainder==5) putchar('E');
            if(remainder==6) putchar('F');
            if(remainder==7) putchar('G');
            if(remainder==8) putchar('H');
            if(remainder==9) putchar('I');
            x/=10;
            if(x<1) break;
        }
        printf("\n");
    }

    return 0;
}

