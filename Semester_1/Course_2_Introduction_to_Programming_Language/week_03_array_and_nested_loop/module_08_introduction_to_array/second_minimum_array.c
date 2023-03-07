#include <stdio.h>
int main()
{
    int n=6, ara[] = {12,0,19,26,11,6}, i, min = ara[0],second_min = ara[0];

    for(i=0;i<n;i++)
    {
        if(ara[i]<min)
        {
            second_min=min;
            min=ara[i];
        }
        else if(ara[i]<second_min)
        {
            second_min=ara[i];
        }
    }

    printf("The minimum value is = %d\n",min);
    printf("The second minimum value is = %d\n",second_min);

    return 0;
}


