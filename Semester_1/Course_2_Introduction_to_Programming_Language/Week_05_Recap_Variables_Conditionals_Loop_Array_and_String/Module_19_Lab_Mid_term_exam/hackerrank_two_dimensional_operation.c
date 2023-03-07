#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&arr[i][j]);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==i+1 && arr[i][j]==j+1)
                arr[i][j]+=3;
            else if(arr[i][j]==i+1)
                arr[i][j]+=2;
            else if(arr[i][j]==j+1)
                arr[i][j]+=1;
        }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    return 0;
}

