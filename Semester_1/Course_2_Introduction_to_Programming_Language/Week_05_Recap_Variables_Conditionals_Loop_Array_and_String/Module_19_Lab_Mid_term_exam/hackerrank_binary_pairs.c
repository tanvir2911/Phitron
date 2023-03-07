#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        char s[n];
        for(int i=0; i<=n; i++)
        {
            scanf("%c",&s[i]);
        }
        s[n+1]='\0';
        getchar();

        int sum=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                sum++;
            }
            if(s[i]=='0' && s[i+1]=='1')
            {
                sum++;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
