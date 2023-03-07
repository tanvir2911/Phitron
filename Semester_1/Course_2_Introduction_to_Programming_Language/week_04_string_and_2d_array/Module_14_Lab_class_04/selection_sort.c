#include<stdio.h>

//selection sort

int main()
{
    int n = 8;
    int ara[8] = {12,7,9,3,15,2,6,5};
    int sorted_ara[8];

    int min_index;

    for(int j=0; j<n; j++)
    {
        int minimum=999999;
        for(int i=0; i<n; i++)
        {
            if(ara[i]<minimum)
            {
                minimum=ara[i];
                min_index=i;
            }
        }
        sorted_ara[j]=minimum;
        ara[min_index]=999999;
    }

    for(int i=0; i<n; i++)
        printf("%d ",sorted_ara[i]);

    return 0;
}
