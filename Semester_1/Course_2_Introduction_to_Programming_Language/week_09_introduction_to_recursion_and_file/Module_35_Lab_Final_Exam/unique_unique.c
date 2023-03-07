#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,counter=0;
    scanf("%d",&n);
    char s[n];

    for(int i=0; i<=n; i++)
        scanf("%c",&s[i]);

    for(int i=1; i<=n; i++)
    {
        int x=0;
        for(int j=1; j<=n; j++)
        {
            if(i==j) continue;
            if(s[i]==s[j])
            {
                x=1;
                break;
            }
        }
        if(x==0) counter++;
    }

    printf("%d\n",counter);


    return 0;
}
