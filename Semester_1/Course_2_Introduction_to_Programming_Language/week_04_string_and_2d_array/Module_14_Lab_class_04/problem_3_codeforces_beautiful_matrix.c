#include<stdio.h>
int main()
{
    int ara[5][5],x,y,row_difference,column_difference,minimum_moves;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }

    if(x>2)
        row_difference=x-2;
    else
        row_difference=2-x;

    if(y>2)
        column_difference=y-2;
    else
        column_difference=2-y;

    minimum_moves=row_difference+column_difference;

    printf("%d",minimum_moves);

    return 0;
}
