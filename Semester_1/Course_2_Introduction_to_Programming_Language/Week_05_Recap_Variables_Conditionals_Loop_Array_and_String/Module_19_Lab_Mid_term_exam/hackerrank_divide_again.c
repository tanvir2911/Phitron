#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,ans;
    scanf("%d",&n);

    if(n%3==0)
    {
        ans=n/3;
    }
    else
        ans=-1;

    printf("%d\n",ans);

    return 0;
}
