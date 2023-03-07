#include <stdio.h>
int main()
{
    int n=6, ara[] = {12,7,19,26,11,6}, i;

    int min = ara[0];

    for(i=0;i<n;i++)
    {
        if(ara[i]<min)
        {
            min=ara[i];
        }
    }

    printf("The minimum value i = %d\n",min);

    return 0;
}
