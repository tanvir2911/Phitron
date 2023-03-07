#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,plus=0,minus=0,maximum=0;
    scanf("%d",&n);
    char s[n];

    for(int i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }
    s[n+1]='\0';
    getchar();

    for(int i=0;i<=n;i++)
    {
        if(s[i]=='+')
        {
            minus=0;
            plus++;
            if(maximum<plus)
            {
                maximum=plus;
            }
        }

        else if(s[i]=='-')
        {
            plus=0;
            minus++;
            if(maximum<minus)
            {
                maximum=minus;
            }
        }
    }

    printf("%d",maximum);

    return 0;
}
