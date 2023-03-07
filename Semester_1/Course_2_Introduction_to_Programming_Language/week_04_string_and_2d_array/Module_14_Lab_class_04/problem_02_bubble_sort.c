#include <stdio.h>b=

// bubble sort (2ta kore compare korte hobe)

int main()
{
    int n=8;
    int ara[8] = {12,7,9,3,15,2,6,5};

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(ara[i]>ara[i+1])
            {
                int temp=ara[i+1];
                ara[i+1]=ara[i];
                ara[i]=temp;
            }
        }

    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
