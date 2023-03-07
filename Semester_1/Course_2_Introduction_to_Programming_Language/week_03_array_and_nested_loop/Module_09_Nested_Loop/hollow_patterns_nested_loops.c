#include <stdio.h>
int main()
{
    int column,row,i,j;
    printf("Enter the number of rows and columns to see the hollow pattern: ");
    scanf("%d%d",&row,&column);

    for(i=1;i<=row;i++)
    {
        if(i==1 || i==row)
        {
            for(j=0;j<column;j++)
            {
                printf("#");
            }
        }
        else
        {
            printf("#");
            for(j=1;j<=column-2;j++)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
