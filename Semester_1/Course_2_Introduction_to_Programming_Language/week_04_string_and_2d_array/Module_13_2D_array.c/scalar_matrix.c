#include <stdio.h>

// scalar matrix check

int main()
{
    int row, col;
    scanf("%d%d",&row,&col);
    int ara[row][col];
    for(int i=0;i<row;i++)\
    {
        for(int j=0;j<col;j++)
            scanf("%d",&ara[i][j]);
    }

    int abs=ara[0][0];

    if(row==col)
    {
        int ans = 1;
        for(int i=0;i<row;i++)\
        {
            for(int j=0;j<col;j++)
            {
               if(i==j)
                {
                    if(ara[i][j]==abs)
                        continue;
                    else
                        ans=0;
                }
               else
               {
                   if(ara[i][j]!=0)
                   {
                       ans=0;
                   }
               }
            }
        }
        if(ans==1)
            printf("Scalar matrix\n");
        else
            printf("Not Scalar matrix\n");
    }
    else
        printf("Not Scalar\n");

    return 0;
}
